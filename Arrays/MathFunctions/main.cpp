#include <iostream>
using namespace std;

int Factorial(int number);
template<typename T> double Power(T number, int power);

typedef double DataType;

int main()
{
	setlocale(LC_ALL, "rus");

	DataType number;
	int power;

	cout << "Введите число: ";
	cin >> number;
	cout << "Факториал числа: " << Factorial(number) << endl;

	cout << "Введите показатель степени: ";
	cin >> power;
	cout << "Число в степени " << power << ": " << Power(number, power) << endl;

	return 0;
}

int Factorial(int number)
{
	int result{1};

	if (number < 0) return 0;

	for (int i = number; i > 0; --i) result *= i;

	return result;
}

template<typename T>
double Power(T number, int power)
{
	T result{ 1 };

	if (power == 0) return 1;

	if (power < 0) return 1 / Power(number, -power);

	for (int i = 0; i < power; ++i) result *= number;

	return result;
}