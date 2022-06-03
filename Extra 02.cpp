#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a, b, c;

    cin >> a >> b >> c;
	
	int count = 0;

	for (char i = a; i <= b; i++)
	{
		for (char j = a; j <= b; j++)
		{
			for (char k = a; k <= b; k++)
			{
				if (i == c || j == c || k == c) {
					continue;
				}
				cout << i << j << k << " ";
				count++;
				
			}
		}
	}
	cout << count;
}


