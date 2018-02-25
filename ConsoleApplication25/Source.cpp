#include <stdio.h>
#include <iostream>
#include<locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int N;
	do
	{
		cout << "Ввести номер задания: " << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			int a[8][9], b, c[8] ={ 0 },kol = 0;
			cout << "Ввести число b:" << endl;
			cin >> b;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Записать в массив c:" << endl;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (a[i][j] > b)
					{
						kol++;
						c[i] = kol;
					}
				}
					}
			for (int i = 0; i < 8; i++)
			{
				
cout << c[i] << "\t";
				
			}
			cout << endl;
		}
		break;
		case 2:
		{
			int a[8][5], sum1=0, sum2 = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j <5; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 8; i++)
			{
for (int j = 0; j < 5; j++)
			{				
	if (j == 2)
	{
		sum1 =sum1+ a[i][j];
	}
						
							
			}
			}
			
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (i == 3)
					{
						sum2 = sum2 + a[i][j];
					}
				}
				
			}
			
			cout << "Сумма всех элементов второга столбца: " << sum1 << endl;
				cout<<"Сумма всех элементов 3-й строки массива: "<< sum2 << endl;

		}
		break;
		case 3:
		{
			int a[5][5], k = 0, sum = 0,  g[25] = { 0 };
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j <5; j++)
				{
					a[i][j] =-20+ rand() % 50;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Одномерный массив: " << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j <5; j++)
				{
					if (( a[i][j]>=1) && (a[i][j] <= 10))
					{
						g[k] = a[i][j];
						sum += g[k];
						k++;
					}
				}
			}
			
			for (int i = 0; i <25; i++)
			{
				cout << g[i] << "\t";

			}
			cout << endl;
			cout <<"Сумма одномерного массива "<< sum << endl;
		}
		break;
		case 4:
		{
			int a[6][6], sum = 0, f[5] = {0};
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j <6; j++)
				{
					a[i][j] =1 + rand() % 50;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "----------" << endl;
			
			for (int i = 0; i < 5; i++)
			{
				f[i] = a[i + 1][i];
				sum += f[i];
			}
		cout << sum << endl;

		}
		break;
		default:
			break;
		}
	} while (N>0);


}