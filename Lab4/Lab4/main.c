#include "stdafx.h"
#include <stdio.h>
#include "Header.h"
#include <locale.h>
int main()
	{
		int isBreak = false;
		setlocale(LC_ALL, "Russian");
		while (!isBreak)
		{
			printf("\nВведите номер пункта:");
			switch (_getch())
			{
			case '1':
				system("cls");
				printf("\nЗадание 2\n");
				incrementStackVariable();
				break;
			case '2':
				system("cls");
				printf("\nЗадание 3\n");
				incrementHeapVariable();
				break;
			case '3':
				system("cls");
				printf("\nЗадание 7\n");
				sortStackArray();
				break;
			case '4':
				system("cls");
				printf("\nЗадание 8\n");
				sortHeapArray();
				break;
			case '0':
				system("cls");
				printf("\nДо свидания\n");
				isBreak = true;
				break;
			default:
				system("cls");
				printf("\nВы выбрали неверный номер\n");
				break;
			}
		}
		system("pause");
		return 0;
	}
