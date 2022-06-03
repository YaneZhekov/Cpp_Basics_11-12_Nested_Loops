#include <iostream>
using namespace std;


int main()
{
	int start, end, magicNumber;
	int combinations = 0;
	int i = 0;
	int sum = 0;
    cin >> start >> end >> magicNumber;

	for (size_t x1 = start; x1 <= end; x1++)
	{
		for (size_t x2 = start; x2 <= end; x2++)
		{
			combinations++;
			int sum = x1 + x2;
			if (sum == magicNumber) {
				cout << "Combination N:" << combinations << " (" << x1 << " + " << x2 << " = " << magicNumber << ")" << endl;
				return 0;
			}
		
		}
	}

	cout << combinations << " combinations - neither equals " << magicNumber << endl;
	return 0;
	

}

