#include <iostream>
using namespace std;


int main()
{
    int start, end;

    cin >> start >> end;

	for (int a = start; a <= end; a++)
	{
		for (int b = start; b <= end; b++)
		{
			for (int c = start; c <= end; c++)
			{
				for (int d = start; d <= end; d++)
				{
					
					if ((b + c) % 2 == 0 && a > d && ((a % 2 == 0 && d % 2 != 0) || (a % 2 != 0 && d % 2 == 0))) {
						cout << a << b << c << d << " ";
					}
					


				}
			}
		}
	}
}

