#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "Enter the size of square" << endl;
    cin >> side;

    // for (int row = 0; row < side; row++) // for rows
    // {
    //     for (int col = 0; col < side; col++) // for columns
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *


//hollow square
    for (int i = 0; i < side; i++)
    {
        if (i == 0 || i == side - 1)
        {
            // first and last row
            for (int j = 0; j < side; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            // first and last star
            cout << "* ";
            // spaces
            for (int j = 0; j < side - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}