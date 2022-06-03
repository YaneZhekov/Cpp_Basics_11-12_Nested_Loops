#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	string text;
	
	cin >> n;

	getline(cin >> ws, text);

	cout.setf(ios::fixed);
	cout.precision(2);

	double grade, average = 0, allAverages = 0;
	double allGrades = 0;
	int count = 0;

	while (text != "Finish") {

		count++;
		for (int i = 0; i < n; i++)
		{
			cin >> grade;
			allGrades += grade;
			
		}
		average = allGrades / n;
		allAverages += average;
		cout << text << " - " << average << "." << endl;
		allGrades = 0;

		getline(cin >> ws, text);
	}
	cout << "Student's final assessment is " << allAverages / count << "." << endl;

}

