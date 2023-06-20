#include <iostream>
#include<cstdlib>
#include<ctime>


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//������ 1. ��. �������������� � ������� �� 10 ����� � ���-�� ��������� ������ ��. ����.
	std::cout << "������ 1.\n������� �������������� � �������.\n";
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
	double mean_arr = sum / (double)size; // ��� ����, ����� ��������� ���-�� ����������
	std::cout << "��. ���������: " << mean_arr << std::endl;
	for (int i = 0; i < size; i++)
		if (arr[i] < mean_arr)
			counter++;
	std::cout << "���������� ��������� " << counter << " ������ �� �����: " << mean_arr << std::endl;
	std::cout << std::endl;


	//������ 2. ����� ���� ��������.
	std::cout << "������ 2.����� ���� ��������.\n";
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
	std::cout << "������ ������:\n";
	for (int i = 0; i < rows1; i++) { //���� i ������������ ���� �������
		for (int j = 0; j < cols1; j++) {// ���� j ������������ ������� �������
			arr1[i][j] = rand() % (5 + 1 - 1) + 1; // [1....5] �������� ������������

			std::cout << arr1[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << "������ ������:\n";
	for (int i = 0; i < rows2; i++) { //���� i ������������ ���� �������
		for (int j = 0; j < cols2; j++) {// ���� j ������������ ������� �������
			arr2[i][j] = rand() % (5 + 1 - 1) + 1; // [1....5] �������� ������������
			std::cout << arr2[i][j] << '\t';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < rows3; i++) // ���������� ��������� ��� �������� �������
		for (int j = 0; j < cols3; j++) // ���������� ��������� ��� �������� �������
			arr3[i][j] = arr1[i][j] + arr2[i][j];

	std::cout << "����� ���� ��������:\n";
	for (int i = 0; i < rows3; i++) { // ���������� ��������� ��� �������� �������
		for (int j = 0; j < cols3; j++) // ���������� ��������� ��� �������� �������
			std::cout << arr3[i][j] << '\t';
		std::cout << std::endl; // ������� ������ ��� �������
	}
	std::cout << std::endl;


	//������ 3.������������ �����.
	std::cout << "������ 3.\n������� ������������ ����� -> ";
	std::cin >> n;
	const int size4 = 6; // ������ ��������� ��� �������� ����� �������
	int arr4[size4];
	
	if (n < 100000 || n > 999999) // �������� �� ���� ������������� �����
		std::cout << "������! ������� ����� ������������ �����.\n";
	else {
		for (int i = size4 - 1; i >= 0; i--) { // ��������� ������ ������� � �������� �������
			arr4[i] = n % 10;
			n /= 10;
		}

		std::cout << "�������� ������:\n{ ";
		for (int i = 0; i < size4; i++)
			std::cout << arr4[i] << ", ";
		std::cout << "\b\b }" << std::endl;
	}


	return 0;
}