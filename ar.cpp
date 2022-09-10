/*
 * Домашнее задание от 10.01.2022
 Написать программу, в которой реализовать:
 1. Шаблон функции заполнения одномерного массива, размерности 20, случайными целыми числами в диапазоне от 0 до 20.
 Аргументами функции являются: массив, размер массива. Возвращаемого значения нет.
 2. Шаблон функции вывода массива на экран. В виде строки из элементов, разделенных пробелом.
 Аргументами функции являются: массив, размер массива. Возвращаемого значения нет.
 3.  Шаблон функции поиска в массиве максимального элемента. Аргументами функции являются: массив,
 размер массива. Возвращаемое значение- максимальный элемент.
 4.  Шаблон функции поиска в массиве минимального элемента. Аргументами функции являются: массив, размер массива.
 Возвращаемое значение- минимальный элемент.
 На занятии мы с вами использовали такую форму шаблона для передачи массива в виде аргумента:
 template <typename T>
 void my_function (T m, int s);
 Предлагаю вам самостоятельно попробовать
 template <typename T>
 void my_function (T m[], int s);
 Такая запись позволит определить тип данных в массиве и реализовать поис максимально и минимального элемента по значению.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define SIZE 20
const int min_n { 0 }, max_n { 20 };

//1
template<typename T>
void fillArray(T ar[], int size = SIZE) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		ar[i] = ::min_n + rand() % (::max_n - ::min_n + 1);
	}
}

//2
template<typename T>
void printArray(T ar[], int size = SIZE) {
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl;
}

//3
template<typename T>
T maxArray(T ar[], int size = SIZE) {
	T m { ar[0] };
	for (int i = 1; i < size; i++)
		if (ar[i] > m)
			m = ar[i];
	return m;
}

//4
template<typename T>
T minArray(T ar[], int size = SIZE) {
	T m { ar[0] };
	for (int i = 1; i < size; i++)
		if (ar[i] < m)
			m = ar[i];
	return m;
}

int main() {
	unsigned int ui[SIZE] { };
	long l[SIZE] { };
	long double ld[SIZE] { };

	fillArray(ui);
	printArray(ui);
	cout << "Min: " << minArray(ui) << endl;
	cout << "Max: " << maxArray(ui) << endl;
	cout << endl;

	fillArray(l);
	printArray(l);
	cout << "Min: " << minArray(l) << endl;
	cout << "Max: " << maxArray(l) << endl;
	cout << endl;

	fillArray(ld);
	printArray(ld);
	cout << "Min: " << minArray(ld) << endl;
	cout << "Max: " << maxArray(ld) << endl;
	cout << endl;

	return 0;
}
