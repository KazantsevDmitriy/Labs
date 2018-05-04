#include "stdafx.h"
#include <math.h>
#include <iostream>
#include "Header.h"
#include <locale.h>
using namespace std;
Complex::Complex()
	:Complex(0,0)
{}
Complex::Complex(double x)
	: Complex(sqrt(pow(x, 2)), atan(0.))
{}
Complex::Complex(double mod, double arg)
	: r(mod), phi(arg)
{}
double Complex::Re() const
{
	return (!R() && !Phi()) ? 0 : cos(phi) * r;
}

double Complex::Im() const
{
	return (!R() && !Phi()) ? 0 : sin(phi) * r;
}

double Complex::R() const
{
	return r;
}

double Complex::Phi() const
{
	return phi;
}

Complex operator+ (const Complex& left, const Complex& right)
{
	double re = left.Re() + right.Re();
	double im = left.Im() + right.Im();
	return Complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}
Complex operator- (const Complex& left, const Complex& right)
{
	double re = left.Re() - right.Re();
	double im = left.Im() - right.Im();
	return Complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}
Complex operator* (const Complex& left, const Complex& right)
{
	double re = left.Re()*right.Re() - left.Im()*right.Im();
	double im = left.Re()*right.Re() + left.Im()*right.Im();
	return Complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}
Complex operator/ (const Complex& left, const Complex& right)
{
	double re = (left.Re()*right.Re() + left.Im()*right.Im())/(pow(right.Re(),2)+pow(right.Im(),2));
	double im = (left.Re()*left.Im() - left.Re()*right.Im()) / (pow(right.Re(), 2) + pow(right.Im(), 2));
	return Complex(sqrt(pow(re, 2) + pow(im, 2)), atan(im / re));
}
ostream& operator<< (ostream& stream, const Complex& data)
{
	stream << data.Re() << ((data.Im()>0) ? "+" : "") << data.Im() << "i";
	return stream;
}
Complex::operator double()
{
	return Re();
}
Complex y(const Complex& z);
Complex pow(const Complex& z1, const Complex& z2);
Complex pow(const Complex& z, int p);
int main()
{
	double mod = 0, arg = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Введите модуль комплексного числа\n";
	cin >> mod;
	cout << "Введите аргумент комплексного числа\n";
	cin >> arg;
	Complex z = Complex(mod, arg);
	Complex result = y(z);
	cout << "z = " << z << "\ny(z) = " << result << "\n";
	system("pause");
	return 0;
}
Complex y(const Complex& z)
{
	return pow(z, 3) + (Complex(sqrt(5), atan(2))*pow(z, 2)) + (Complex(sqrt(5), atan(-2))*pow(z, Complex(5, -3.14 / 2)));
}
Complex pow(const Complex& z, int p)
{
	return Complex(pow(z.R(), p), z.Phi()*p);
}
Complex pow(const Complex& z1, const Complex& z2)
{
	return Complex(exp(z2.R()*z1.Phi()), z2.R()*log(z1.R()));
}