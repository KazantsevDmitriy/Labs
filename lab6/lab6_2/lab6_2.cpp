#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Header.h"
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int count, data;
	char ch;
	while (true)
	{
		system("CLS");
		cout << "Введите размер списка\n";
		cin >> count;
		Queue<int> lst(count);
		for (int i = 0; i < count; i++)
		{
			cin >> data;
			lst.Push(data);
		}
		for (int i = 0; i < count; i++)
		{
			cout << "ЭЛЕМЕНТ " << lst.Peek() << " ВЫШЕЛ" << endl;
			lst.Pop();
		}
		cout << "Введите 0 для завершение работы\n";
		cin >> ch;
		if (ch == '0') break;
		else continue;
	}
	system("PAUSE");
	return 0;
}
