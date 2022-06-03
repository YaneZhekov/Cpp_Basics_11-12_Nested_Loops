#include <iostream>
using namespace std;


int main()
{
    double days, hours;

    cin >> days >> hours;

	cout.setf(ios::fixed);
	cout.precision(2);

	double totalPerDay = 0, total = 0;

	for (int i = 1; i <= days; i++)
	{
		for (int b = 1; b <= hours; b++)
		{
			if (i % 2 == 0 && b % 2 != 0) {
				totalPerDay += 2.50;
			}
			else if (i % 2 != 0 && b % 2 == 0) {
				totalPerDay += 1.25;
			}
			else {
				totalPerDay += 1.00;
			}
			
			
		}
		cout << "Day: " << i << " - " << totalPerDay << " leva" << endl;
		total += totalPerDay;
		totalPerDay = 0;

	}
	cout << "Total: " << total << " leva";
}

