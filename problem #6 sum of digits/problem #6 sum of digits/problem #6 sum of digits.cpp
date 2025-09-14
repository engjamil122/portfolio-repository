#include <iostream>
using namespace std;

int readusernumber(string message)
{
	int number = 0;

	do
	{
		cout << message;
		cin >> number;
		cout << endl;
	} while (number <= 0);
	return number;
}

int reversing_and_addition(int number)
{
	int remainder = 0;
	int sum = 0;
	while (number)
	{
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}
	return sum;
}

int main()
{
	cout << "the sum of the digits = " << reversing_and_addition(readusernumber("enter a positive number: ")) << endl;
	return 0;
}
