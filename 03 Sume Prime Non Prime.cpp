#include <iostream>
#include <string>
using namespace std;


int main()
{
	string command;
	int count = 0;
	cin >> command;
	int sumPrime = 0, sumNotPrime = 0;
	while (command != "stop") {


		int number = stoi(command);

		if (number < 0) {
			cout << "Number is negative." << endl;
		}
		else {
			for (int i = 1; i <= number; i++)
			{
				if (number % i == 0) {
					count++;
				}
			}

			if (count == 2) {
				sumPrime += number;
				count = 0;
			}
			else {
				sumNotPrime += number;
				count = 0;
			}

		}

		cin >> command;
	}

	
	cout << "Sum of all prime numbers is: " << sumPrime << endl;
	cout << "Sum of all non prime numbers is: " << sumNotPrime << endl;
}

