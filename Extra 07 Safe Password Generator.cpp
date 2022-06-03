#include <iostream>
using namespace std;


int main()
{

	int x, y, max;

	cin >> x >> y >> max;

	int count = 0;
	char i = 35;
	char k = 64;

	for (int a = 1; a <= x; a++)
		{
		for (int b = 1; b <= y; b++)
		{	
			if (i > 55) {
				i = 35;
			}
			if (k > 96) {
				k = 64;
			}
			if (count == max) 
			{
				break;
			}
			cout << i << k << a << b << k << i << "|";
			count++;
			i++;
			k++;
		}

	}
	

	
}

