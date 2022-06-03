#include <iostream>
using namespace std;


int main()
{
    int startNum, endNum;

    cin >> startNum >> endNum;

	for (int number = startNum; number <= endNum; number++)
	{
		int ones = number % 10;
		int tens = number / 10 % 10;
		int hundreds = number / 100 % 10;
		int thousands = number / 1000 % 10;
		int tensThousands = number / 10000 % 10;
		int hundsThousands = number / 100000;

		int sumEven = ones + hundreds + tensThousands;
		int sumOdd = tens + thousands + hundsThousands;
		if (sumEven == sumOdd) {
			cout << number << " ";
		}

	}
}

