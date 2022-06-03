#include <iostream>
using namespace std;


int main()
{
    int males, females, tables;

    cin >> males >> females >> tables;

	int count = 0;

	for (int i = 1; i <= males; i++)
	{
		for (int j = 1; j <= females; j++)
		{
			if (count == tables) {
				break;
			}
			cout << "(" << i << " <-> " << j << ")" << " ";
			count++;
		}
	}
}

