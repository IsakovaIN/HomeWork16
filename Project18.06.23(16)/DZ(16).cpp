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
	double mean_arr = sum / (double)size; // для того, чтобы сократить кол-во вычислений
	std::cout << "Ср. арифметич: " << mean_arr << std::endl;
	for (int i = 0; i < size; i++)
		if (arr[i] < mean_arr)
			counter++;
	std::cout << "Количество элементов " << counter << " меньше ср арифм: " << mean_arr << std::endl;
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

	for (int i = 0; i < rows3; i++) // используем константы для перебора массива
		for (int j = 0; j < cols3; j++) // используем константы для перебора массива
			arr3[i][j] = arr1[i][j] + arr2[i][j];

	std::cout << "Сумма двух массивов:\n";
	for (int i = 0; i < rows3; i++) { // используем константы для перебора массива
		for (int j = 0; j < cols3; j++) // используем константы для перебора массива
			std::cout << arr3[i][j] << '\t';
		std::cout << std::endl; // перенос строки без условий
	}
	std::cout << std::endl;


	//Задача 3.Шестизначное число.
	std::cout << "Задача 3.\nВведите шестизначное число -> ";
	std::cin >> n;
	const int size4 = 6; // вводим константу для хранения длины массива
	int arr4[size4];
	
	if (n < 100000 || n > 999999) // проверка на ввод шестизначного числа
		std::cout << "Ошибка! Вводить нужно шестизначное число.\n";
	else {
		for (int i = size4 - 1; i >= 0; i--) { // заполняем массив числами в обратном порядке
			arr4[i] = n % 10;
			n /= 10;
		}

		std::cout << "Итоговый массив:\n{ ";
		for (int i = 0; i < size4; i++)
			std::cout << arr4[i] << ", ";
		std::cout << "\b\b }" << std::endl;
	}


	return 0;
}