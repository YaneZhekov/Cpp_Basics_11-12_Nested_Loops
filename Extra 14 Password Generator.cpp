#include <iostream>
using namespace std;


int main()
{
    int num1, num2;

    cin >> num1 >> num2;


	for (int i = 1; i < num1; i++)
	{
		for (int l = 1; l < num1; l++)
		{
			for (char a = 'a'; a < num2 + int('a'); a++)
			{
				for (char b = 'a'; b < num2 + int('a'); b++)
				{
					for (int k = 1; k <= num1; k++)
					{
						if (k > i && k > l) {
							cout << i << l << a << b << k << " ";
						}
						
					}
				}
			}
		}
	}
}

