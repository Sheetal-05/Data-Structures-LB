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

    for (int row = 1; row < row_count; row++)
    {
        for (int col = 0; col < row ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }




    //  for (int row = row_count; row >0; row--)
    // {
    //     for (int col = 0; col < row ; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



    // for (int row = 1; row < row_count; row++)
    // {
    //     for (int col = 0; col < row_count - row ; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
} 