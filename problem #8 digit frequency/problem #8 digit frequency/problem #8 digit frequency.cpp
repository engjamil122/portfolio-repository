#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int enterpositivenumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

int check_frequency(short digit_tocheck, int usernumber)
{
	int freq_counter= 0, remainder = 0;

	while (usernumber > 0)
	{
		remainder = usernumber % 10;
		usernumber=usernumber / 10;
		
		if (remainder==digit_tocheck)
		{
			freq_counter++;

		}
		
	}

	return freq_counter;
}


int main()
{
	
	int usernumber = enterpositivenumber("please enter a positive number: ");
	short digit_tocheck = enterpositivenumber("enter the number you wish to check: ");
	cout << endl << endl;

	cout << "the digit " << digit_tocheck << " is repeated " << check_frequency(digit_tocheck, usernumber) << " times";

	cout << endl << endl;
	return 0;


}