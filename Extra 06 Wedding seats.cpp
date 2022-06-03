#include <iostream>
using namespace std;


int main()
{
	char sector;
	int rows, seats, currentSeats;

	cin >> sector >> rows >> seats;
	
	int totalSeats = 0;

	for (char start = 'A'; start <= sector; start++)
	{
		for (int i = 1; i <= rows; i++)
		{
			currentSeats = seats;

			if (i % 2 == 0) {
				currentSeats += 2;
			}
			for (char k = 'a'; k < currentSeats + int('a'); k++)
			{
				cout << start << i << k << endl;
				totalSeats++;
			}
			
			
		}
		rows++;
	}

	cout << totalSeats;
}

