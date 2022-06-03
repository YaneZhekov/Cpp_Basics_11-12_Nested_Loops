#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

	int count1 = 0, count2 = 0;

	for (int i = num1; i <= num1 + num3; i++)
	{
		for (int j = num2; j <= num2 + num4; j++)
		{	
			for (int l = 1; l < 100; l++)
			{
				if (i % l == 0) {
					count1++;
				}
				if (j % l == 0) {
					count2++;
				}
			}
			if (count1 == 2 && count2 == 2) {
				cout << i << j << endl;
				count1 = 0;
				count2 = 0;
			}
			else {
				count1 = 0;
				count2 = 0;
			}
		}
	}

}

