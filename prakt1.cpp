#include<iostream>
#include<string>
using namespace std;

float mysqrt(float a);
int GCD(int firstNumber, int secondNumber);

int main()
{
	//Задание 1 Вариант 7
	cout << "task 1 option 7\n";

	float number;
	cin >> number;
	cout << mysqrt(number) << endl;

	//Задание 2 Вариант 22
	cout << "task 2 option 22\n";
	
	int firstNumber, 
		secondNumber, 
		gcd = 1;

	cin >> firstNumber;
	cin >> secondNumber;

	gcd = GCD(firstNumber, secondNumber);
	cout << gcd;
}

float mysqrt(float a)
{
	float b = 2, c = 0;

	for (int i = 0; i < 10; i++)
	{
		c = 1./2 * (b + a / b);
		b = c;
	}
	
	return b;
}

int GCD(int firstNumber, int secondNumber) {
	int gcd = 1;

	for (int i = 1; i <= firstNumber || i <= secondNumber; i++) {
		if (firstNumber % i == 0 && secondNumber % i == 0) {
			gcd = i;
		}
	}

	return gcd;
}