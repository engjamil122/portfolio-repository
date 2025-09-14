#include <iostream>
#include <string>
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

/*void print_digits_in_order(int number)
{
	int i = 1, remainder = 0;    my way.
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		if (remainder != i)
		{
			cout << endl;
			cout << i << endl << endl;
			i++;
		}
	}
}*/

//abu adhouds way:

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

void print_digits(int number)
{
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}
int main()
{
	/*print_digits_in_order(Readpositivenumber("please insert your number: "));/**/

	print_digits(reverse_number(Readpositivenumber("please enter a positive number: ")));

	return 0;
}