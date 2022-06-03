#include <iostream>
using namespace std;

int main()
{
    int hundreds, tens, ones;

    cin >> hundreds >> tens >> ones;

	for (int i = 1; i <= hundreds; i++)
	{
		for (int i2 = 1; i2 <= tens; i2++)
		{
			for (int i3 = 1; i3 <= ones; i3++)
			{
				if (i3 % 2 == 0 && i % 2 == 0 && (i2 == 2 || i2 == 3 || i2 == 5 || i2 == 7))
				{
					cout << i  << " " << i2 << " " << i3 << " " << endl;
				}
			}
		}
	}
}

