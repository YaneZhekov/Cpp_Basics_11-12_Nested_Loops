#include <iostream>
#include <string>
using namespace std;


int main()
{
    string Movie, type;

    getline(cin >> ws, Movie);

    cout.setf(ios::fixed);
    cout.precision(2);

    int kidCount = 0, studentCount = 0, standardCount = 0;
    int allPeople = 0, current = 0;
    int roomSize, peoplePerRoom;

    while (Movie != "Finish") {

        cin >> roomSize;
        peoplePerRoom = roomSize;
        current = 0;
        
        while (peoplePerRoom != 0) {

            
            cin >> type;
            if (type == "End") {
                break;
            }
            
            peoplePerRoom--;
            allPeople++;
            current++;

            if (type == "standard") {
                standardCount++;
            }
            else if (type == "student") {
                studentCount++;
            }
            else if (type == "kid") {
                kidCount++;
            }
            
           
            
            
        }

        cout << Movie << " - " << (double)current / roomSize * 100 << "% full." << endl;

      
        getline(cin >> ws, Movie);

    }
    cout << "Total tickets: " << allPeople << endl;
    cout << (double)studentCount / allPeople * 100 << "% student tickets." << endl;
    cout << (double)standardCount / allPeople * 100 << "% standard tickets." << endl;
    cout << (double)kidCount / allPeople * 100 << "% kids tickets." << endl;


}

