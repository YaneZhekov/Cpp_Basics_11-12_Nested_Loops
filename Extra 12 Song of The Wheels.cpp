#include <iostream>
using namespace std;

int main()
{
	int password, a1 = 0, b1 = 0, c1 = 0, d1 = 0, count = 0;

	cin >> password;

	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b < 10; b++)
		{
			for (int c = 1; c < 10; c++)
			{
				for (int d = 1; d < 10; d++)
				{
					if (a * b + c * d == password) {
						if (a < b && c > d) {
							cout << a << b << c << d << " ";
							count++;
						}
						if (count == 4) {
							a1 = a;
							b1 = b;
							c1 = c;
							d1 = d;
							count++;
						}
					}
				}
			}
		}

	}
	cout << endl;
	if (count < 4) {
		cout << "No!";
	}
	else {
		cout << "Password: " << a1 << b1 << c1 << d1;
	}


}