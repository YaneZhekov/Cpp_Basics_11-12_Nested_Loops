#include <iostream>
using namespace std;


int main()
{
    int n;

    cin >> n;

	for (int thousands = 1; thousands < 10; thousands++)
	{
		for (int hundreds = 1; hundreds < 10; hundreds++)
		{
			for (int tens = 1; tens < 10; tens++)
			{
				for (int ones = 1; ones < 10; ones++)
				{
					if (tens + ones == hundreds + thousands) {
						if (n % (hundreds + thousands) == 0) {
							cout << thousands << hundreds << tens << ones << " ";
						}
					}
				}
			}
		}
	}
}

