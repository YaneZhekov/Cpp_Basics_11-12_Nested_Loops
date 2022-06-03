#include <iostream>
using namespace std;


int main()
{
    int number;

    cin >> number;

    int count = 1;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (count > number) {
                break;
            }
            cout << count << " ";
            count++;
        }
        if (count > number) {
            break;
        }
        cout << endl;
    }
}

