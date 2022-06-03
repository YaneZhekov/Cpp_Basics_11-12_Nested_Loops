#include <iostream>
#include <string>
using namespace std;


int main()
{
    string place;
    double moneyRequired;
    double money;

    cin >> place;

    while (place != "End") {

        cin >> moneyRequired;

        
        while (moneyRequired > 0) {

            cin >> money;
            moneyRequired -= money;

        }
        cout << "Going to " << place << "!" << endl;
        
        cin >> place;


    }
    return 0;
}

