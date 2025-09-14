#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Number;

	do
	{
		cout << message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int reverse_number(int number) //abu hadhouds way.
{
	int remainder = 0, number2 = 0;
	while (number > 0)
	{
		remainder = number % 10;  // lets say the number is 1234, the remainder will be 4.
		number = number / 10;     // again we osstricize the last digit : 123.4.
		number2 = number2 * 10 + remainder; // then: number2= 0 *10 thats 0 plus 4 thats the first digit. the second will be number2=4 *10=40+3 (the remainder in the second cycle) = 43 and so on.
	}
	return number2;
}

bool check_palindrome_number(int number)
{
	return number == reverse_number(number);
}

int main()
{
	if (check_palindrome_number(reverse_number(ReadPositiveNumber("please enter a positive number: "))))
	{
		cout << endl << endl;
		cout << "yes it is a palindrome number." << endl;
	}
	else
	{
		cout << endl << endl;
		cout << "no its not a palindrome number." << endl;
	}
	return 0;
}


