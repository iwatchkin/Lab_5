﻿// Лабораторная работа № 5. (Ивлиев М. Е.) 

#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	while (1)
	{
		system("pause");

		system("cls"); // Очищает поле консоли после каждой выполненной итерации цикла while. //

		int z = 0;

		cout << " Выберите действие : \n \n \t 1. Выполнить программу. \n \n \t 2. Выйти из программы. \n \n Действие : ";

		cin >> z;

		if (z != 1)
		{
			break;
		}

		int i, l, r, k = 0;

		double N, x, y; // x и y - числа, с которыми предложено сравнить элементы массива.

		bool f;

		cout << " \n Введите количество элементов массива : ";

		cin >> N;

		do
		{
						
			f = false;

			if (N == int(N) && N > 0) //  Если значение целой части  численно равно самому числу , а также значение целой части строго больше нуля, то число N есть натурально число.
			{
				f = true; // Переприсваиваем значение булевой переменной, чтобы выйти из тела цикла.

			}
			else
			{
				cout << " \n Вы ввели не натуральное значение n ! \n \n Введите значение n повторно :  "; /* В противном случае просим пользователя вновь ввести значение n.
																										   Программа будет требовать пользователя вновь ввести значение переменной n до тех пор,
																		                                   пока тот ни введёт значение n, согласно заданным условиям. */

				cin >> N;
			}
		
		} while (!f);

		int* arr = new int[N];

		cout << " \n Введите диапазон чисел (отрезок), которыми вы бы хотели заполнить массив. l - левая граница, r - правая." << endl;

		cout << " \n Левая граница диапазона : ";

		cin >> l;

		cout << " \n Правая граница диапазона : ";

		cin >> r;

		for(i = 0; i < N; i++)
		{
			arr[i] = rand() % (r - l) + l;
		}
		


		for(i = 0; i < N; i++)
		{
			cout << i + 1 << ". " << arr[i] << endl;
		}
		
		do
		{
			cout << " \n Введите числа x и y, для последущего их сравнения с элементами массива : " << endl;
			
			cout << " \n  x : ";

			cin >> x;

			cout << "  \n y : ";

			cin >> y;

		} while(x >= y);
	
		cout << " \n Номера элементов масcива, удовлетворяющих неравенству x < A[i] < y : " << endl;
		
		for (i = 0; i < N; i++)
		{
			if (x < arr[i] && arr[i] < y )
			{
				cout << i + 1 << ". " << i << endl;

				k++;
			}
			
		}   
		
		if (k == 0)
		{
			cout << " \n Таких элементов не существует! ";
		}

	}
}



