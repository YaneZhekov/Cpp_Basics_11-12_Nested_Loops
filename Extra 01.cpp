#include <iostream>
using namespace std;


int main()
{
    int a, b, c;

    cin >> a >> b >> c;

	for (int n = 1; n <= a; n++)
	{

		for (int j = 1; j <= b; j++)
		{
			

			for (int l = 1; l <= c; l++)
			{
		
			
				if (n % 2 == 0 && l % 2 == 0 && (j == 2 || j == 3 || j == 5 || j == 7)) {
					cout << n << " " << j << " " << l << " " << endl;
					
				}

			}
			
		}
	}

}

