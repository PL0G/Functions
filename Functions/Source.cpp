#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
//�������, ������ �� ����������� � ������ �� ������������.
//������� ����� � �������
void say_hello() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}
//�������, ����������� ��� ����� ����� � ��������� �� �����
void print_sum(int num1,int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}
//������� ����������� ��� ����� ����� � ������������ �� �����
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	//return tmp;
	return num1 + num2;
}
//����� ������� � �������
void print_arr(int arr[],const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
int x2(int num) {
	num *= 2;
	return num;
}
void vx2(int num) {//num - ��������
	num *= 2;
}
void arr_x2(int arr[]) {
	arr[1] *= 2;
}
//������ 1
void pos_indexes(int arr[],const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] >= 0)
			std::cout << i << ' ';
}
//������ 2
int max_arr(int arr1[], const int length1,
			int arr2[], const int length2) {
	int max = arr1[0];
	for (int i = 0; i < length1; i++) 
		max = arr1[i] > max ? arr1[i] : max;
	for (int i = 0; i < length2; i++)
		max = arr2[i] > max ? arr2[i] : max;
	return max;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	//��������� � ���������
	/*
	n = 10;
	//std::cout << x2(n) << std::endl; //20
	vx2(n);
	std::cout << n << std::endl;// n - ��������

	int mass[]{ 5,6,7 };
	vx2(mass[1]);
	std::cout << mass[1] << std::endl;//6

	arr_x2(mass);
	std::cout << mass[1] << std::endl;
	*/
	//�������� � �������
	/*
	say_hello(); //����� ������� ���� void ��� ����������
	std::cout << "...\n";
	say_hello();
	std::cout << "������� ��� ����� ->";
	std::cin >> n >> m;
	// print_sum(n,m); //����� ������� ���� void � ����� ������������
	std::cout <<sum(n, m)<<'\n';//����� ������� ������������ ��������
	*/
	//������� � �������
	/*
	const int size = 15;
	int arr[size]{7,3,10,8,5};
	std::cout << "����������� ������:\n";
	print_arr(arr,size);
	arr[2] = 20;
	std::cout << "�������� ������:\n";
	print_arr(arr, size);
	*/
	//������ 1. ������� ������������� ���������
	/*
	std::cout << "������ 1.\n������:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (11 + 10) - 10;
	}
	print_arr(arr1, size1);
	std::cout << "������� ������������� ��������� �������:\n";
	pos_indexes(arr1, size1);
	std::cout << '\n';
	*/
	//������ 2. �������� � ���� ��������
	std::cout << "������ 2.\n������ 1:\n";
	const int size2_1 = 5;
	int arr2_1[size2_1];
	const int size2_2 = 6;
	int arr2_2[size2_2];

	srand(time(NULL));
	for (int i = 0; i < size2_1; i++) {
		arr2_1[i] = rand() % 51;
	}
	for (int i = 0; i < size2_2; i++) {
		arr2_2[i] = rand() % 51;
	}
	print_arr(arr2_1, size2_1);
	std::cout << "������ 2:\n";
	print_arr(arr2_2, size2_2);
	std::cout << max_arr(arr2_1,size2_1,arr2_2,size2_2);
	return 0;
}