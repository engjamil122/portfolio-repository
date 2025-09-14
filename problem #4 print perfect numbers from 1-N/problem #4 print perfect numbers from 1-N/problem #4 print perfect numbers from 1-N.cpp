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
	for (int i = 0; i < Number; i++)
	{
		if (verifynumbermodulation(i))
		{
			cout << i << endl;
		}
	}
		
}

int main()
{
	verify_perfect_number(ReadPositiveNumber("enter a positive number: "));
	return 0;
}
