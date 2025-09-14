#include <iostream>
using namespace std;

int Readpositivenumber(string message)
{
	int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

void Print_reverse_digits(int number)
{
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10; // remainder or modulo say ; 4
		number = number / 10;    // then we osstricize the last digit : ex 123.4
		cout << remainder << endl; // and we print the 4 out.
	}

}

int main()
{
	Print_reverse_digits(Readpositivenumber("enter a positive number: "));
	return 0;
}