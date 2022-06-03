#include <iostream>
using namespace std;


int main()
{
    int begin, end, magicNumber;
    
    cin >> begin >> end >> magicNumber;

    int count = 1;

    int i ,k ;

    for (i = begin; i <= end; i++)
    {
        for (k = begin; k <= end; k++)
        {
            if (i + k == magicNumber) {
                cout << "Combination N:" << count << " ";
                cout << "(" << i << " + " << k << " = " << magicNumber << ")";
                return 0;
            }
            count++;
        }
        
    }
  
    count--;
    cout << count << " combinations - neither equals " << magicNumber;
    
    
}

