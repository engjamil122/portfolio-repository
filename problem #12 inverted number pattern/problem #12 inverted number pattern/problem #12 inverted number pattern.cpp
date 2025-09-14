#include <iostream>
#include <string>
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

void print_number_reverse_pattern(int number)
{
	
	
	for (int i = number; i>=1; i--)
	{
		for (int j = 0; j< i; j++)
		{
			cout << i;

		}
		
		cout << endl;
	}
}


int main()
{
	print_number_reverse_pattern(readusernumber("please enter a positive number: "));
	return  0;

}
