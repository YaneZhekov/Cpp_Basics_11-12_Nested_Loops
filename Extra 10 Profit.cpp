#include <iostream>
using namespace std;


int main()
{
    int ones, twos, fives, sum;

    cin >> ones >> twos >> fives >> sum;

	for (int i = 0; i <= ones; i++)
	{
		for (int b = 0; b <= twos; b++)
		{
			for (int c = 0; c <= fives; c++)
			{
				if (i * 1 + b * 2 + c * 5 == sum) {
					cout << i << " * 1 lv. + " << b << " * 2 lv. + " << c << " * 5 lv. = " << sum << " lv." << endl;
				}
			}
		}
	}
}

