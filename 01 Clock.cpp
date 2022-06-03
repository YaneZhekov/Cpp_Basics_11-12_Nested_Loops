#include <iostream>
using namespace std;


int main()
{
	int hour = 0;
	int minutes = 0;

	for (size_t i = 0; i < 24; i++)
	{
		for (size_t i = 0; i < 60; i++)
		{
			cout << hour << ":" << minutes << endl;
			minutes++;


			if (i == 59) {
				hour++;
				minutes = 0;
			}
		}
	}

}
