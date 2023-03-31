#include <iostream>
using namespace std;
int main()
{
    int row_count;
    int col_count;
    cout << "Enter the row count" << endl;
    cin >> row_count;
    cout << "Enter the column count" << endl;
    cin >> col_count;

    for (int row = 0; row < row_count; row++)
    {
        // for first row and last row with all stars
        if (row == 0 || row == row_count - 1)
        {
            for (int col = 0; col < col_count; col++)
            {
                cout << "* ";
            }
        }
        else
        { // all other rows first and last col with star
            // first star
            cout << "* ";
            for (int i = 0; i < col_count - 2; i++)
            {
                // all spaces
                cout << "  ";
            }
            // last star
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}