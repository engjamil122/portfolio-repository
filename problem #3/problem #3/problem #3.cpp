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

bool verifynumbermodulation(int Number)
{
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
		sum += i;
		}
		
	}
	return Number == sum;
}

void verify_perfect_number(int Number)
{
	if (verifynumbermodulation(Number))
	

		cout << Number << " is a perfect number.\n";
		
	
	else
	
		cout << Number << " is not a perfect number.\n";
		
	

}

int main()
{
	verify_perfect_number(ReadPositiveNumber("enter a positive number: "));
	return 0;
}