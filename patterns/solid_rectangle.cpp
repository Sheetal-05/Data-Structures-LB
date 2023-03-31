#include <iostream>
using namespace std;
int main()
{

    int length, breadth;
    cout << "Enter the length" << endl;
    cin >> length;
    cout << "Enter the breadth" << endl;
    cin >> breadth;
    for (int row = 0; row < length; row++) // for rows
    {
        for (int col = 0; col < breadth; col++) // for columns
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * * * * *
    // * * * * *   length =3 breadth = 5
    // * * * * *

    return 0;
}