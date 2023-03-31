#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size" << endl;
    cin >> size;

    // if row = 0 , spaces =  size - row , star = row
    for (int row = 0; row < size; row++)
    {
        // spaces print
        for (int col = 0; col < size - row; col++)
        {
            cout << "  ";
        }

        // star print
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
            cout << "  ";
        }

        cout << endl;
    }



    //inverted  pyramid 

    // for (int row = 0; row < size; row++)
    // {
    //     // spaces print
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << "  ";
    //     }

    //     // star print
    //     for (int col = row; col < size ; col++)
    //     {
    //         cout << "* ";
    //         cout << "  ";
    //     }

    //     cout << endl;
    // }


    return 0;
}