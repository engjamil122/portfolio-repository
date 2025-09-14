#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int return_user_number(string message)
{
	int number = 0;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

int check_frequency(short digit_tocheck, int usernumber)
{
	int freq_counter = 0, remainder = 0;

	while (usernumber > 0)
	{
		remainder = usernumber % 10;
		usernumber = usernumber / 10;

		if (remainder == digit_tocheck)
		{
			freq_counter++;

		}

	}

	return freq_counter;
}

void print_all_frequencies(int usernumber)
{
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		short digitfrequency = 0;
		digitfrequency = check_frequency(i, usernumber);
		if (digitfrequency > 0)
		{
			cout << "the digit " << i << " is repeated " << digitfrequency << " time(s)." << endl << endl;
		}
	}
}

int main()
{
	int number = return_user_number("please enter a positive number: ");
	print_all_frequencies(number);
	return 0;
}
