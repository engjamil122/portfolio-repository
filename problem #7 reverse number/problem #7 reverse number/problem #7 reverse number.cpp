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

/*void Print_reverse_digits(int number)
{
	int remainder = 0;
	cout << "\n\nyour number reversed is = ";
	while (number > 0)
	{
		remainder = number % 10; // remainder or modulo say ; 4
		number = number / 10;    // then we osstricize the last digit : ex 123.4
		cout << remainder;// and we print the 4 out.
	}
	cout << endl << endl;
}*/

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

int main()
{
	cout << "your number reversed will be:"
		<< reverse_number(Readpositivenumber("please enter a positive nummber: "))
		<< endl << endl;

	return 0;

}
