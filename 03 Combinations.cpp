#include <iostream>
using namespace std;


int main()
{

    int num;

    cin >> num;

    int combinations = 0;

    for (int a = 0; a <= num; a++)
    {
        for (int b = 0; b <= num; b++)
        {
            for (int c = 0; c <= num; c++)
            {
                if (a + b + c == num) {
                    combinations++;

                }
            }
        }
    }
    cout << combinations;
}

