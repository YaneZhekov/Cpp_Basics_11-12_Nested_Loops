#include <iostream>
using namespace std;


int main()
{

    int floor, room;

    cin >> floor >> room;

    for (int i = floor; i >= 1; i--)
    {
        for (int l = 0; l < room; l++)
        {
            if (i == floor) {
                cout << "L" << i << l << " ";
            }
            else if (i % 2 == 0 && i != floor) {
                cout << "O" << i << l << " ";
            }
            else if (i % 2 != 0) {
                cout << "A" << i << l << " ";
            }
        }
        cout << endl;
    }


    
}
