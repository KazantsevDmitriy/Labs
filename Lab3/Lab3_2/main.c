#include "stdafx.h"
#include <stdio.h>
#include "Header.h"
#include <locale.h>
int main()
{
	int n, k;
	float eps;
	int isBreak = false;
	setlocale(LC_ALL, "Russian");
	while (!isBreak)
	{
		printf("������� ����� ������:");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("\n������� 1\n");
			printf("������� ����� ���������\nn=");
			scanf_s("%i", &n);
			printf("�������� ����� = %.4f\n", summ(n));
			break;
		case '2':
			system("cls");
			printf("\n������� 2\n");
			printf("������� �������� �������� �����\neps=");
			scanf_s("%f", &eps);
			printf("�������� ����� = %.4f\n", summ2(eps));
			break;
		case '3':
			system("cls");
			printf("\n������� 3\n");
			printf("������� ����� ���������\nn=");
			scanf_s("%i", &n);
			printf("������� ����� ���������, ����������� �� ������\nk=");
			scanf_s("%i", &k);
			print(n, k);
			break;
		case '4':
			system("cls");
			printf("\n������� 4\n");
			printf("������� ������� ��������\neps=");
			scanf_s("%f", &eps);
			printf("����� ������� ��������, ���������������� ������� = %i\n", findFirstElement(eps));
			break;
		case '5':
			system("cls");
			printf("\n������� 5\n");
			printf("������� ������� ��������\neps=");
			scanf_s("%f", &eps);
			printf("����� ������� ��������, ���������������� ������� = %i\n", findFirstNegativeElement(eps));
			break;
		case '6':
			system("cls");
			printf("\n�� ��������\n");
			isBreak = true;
			break;
		default:
			system("cls");
			printf("\n�� ������� �������� �����\n");
			break;
		}
	}
	system("pause");
	return 0;
}

