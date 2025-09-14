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

void print_number_pattern(int number)
{
	

	for (int i=1; i<=number; i++)
	{
		
		for (int j=0; j<i;j++ )
		{
			cout << i;
			
		}
		
		cout << endl;
	}
}

int main()
{
	print_number_pattern(Readpositivenumber("please enter a positive number: "));
	return 0;
}