#include <iostream>
#include<cstdlib>
#include<ctime>


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Задача 1. Ср. арифметическое в массиве из 10 чисел и кол-во элементов меньше ср. ариф.
	std::cout << "Задача 1.\nСреднее арифметическое в массиве.\n";
	const int size = 10;
	int arr[size] = { 1, 10, 22, 33, 44, 55, 60, 77, 88, 99 };
	std::cout << "{";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b}" << std::endl;
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	std::cout << "Ср. арифметич: " << sum / (double)size << std::endl;
	for (int i = 0; i < size; i++)
		if (arr[i] < sum / (double)size)
			counter++;
	std::cout << "Количество элементов " << counter << " меньше ср арифм: " << sum / (double)size << std::endl;
	std::cout << std::endl;

	//Задача 2. Сумма двух массивов.
	std::cout << "Задача 2.Сумма двух массивов.\n";
	const int rows1 = 5;
	const int cols1 = 5;
	int arr1[rows1][cols1];
	const int rows2 = 5;
	const int cols2 = 5;
	int arr2[rows2][cols2];
	const int rows3 = 5;
	const int cols3 = 5;
	int arr3[rows3][cols3];

	srand(time(NULL));
	std::cout << "Первый массив:\n";
	for (int i = 0; i < rows1; i++) { //цикл i перебирающий ряды массива
		for (int j = 0; j < cols1; j++) {// цикл j перебирающий колонки массива
			arr1[i][j] = rand() % (5 + 1 - 1) + 1; // [1....5] диапазон включительно

			std::cout << arr1[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << "Второй массив:\n";
	for (int i = 0; i < rows2; i++) { //цикл i перебирающий ряды массива
		for (int j = 0; j < cols2; j++) {// цикл j перебирающий колонки массива
			arr2[i][j] = rand() % (5 + 1 - 1) + 1; // [1....5] диапазон включительно
			std::cout << arr2[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			arr3[i][j] = arr1[i][j] + arr2[i][j];

	std::cout << "Сумма двух массивов:\n";
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			std::cout << arr3[i][j] << '\t';
			if (j == 5 - 1)
				std::cout << std::endl;
		}
	std::cout << std::endl;

	//Задача 3.Шестизначное число.
	std::cout << "Введите шестизначное число -> ";
	std::cin >> n;
	int arr4[6];
	
	if (n < 99999 && n > 999999)//блок не дает вывести больше размера массива = 100 000.
		std::cout << "Ошибка! Введите шестизначное число -> \n";
		else
		std::cout << "\nИтоговый массив:\n{ ";
	for (int i = 0; i < 6; i++) {
		arr4[i] = n % 10;
		n /= 10;
		std::cout << arr4[i] << ", ";
	}
	std::cout << "\b\b" << " }. " << std::endl;

	return 0;
}