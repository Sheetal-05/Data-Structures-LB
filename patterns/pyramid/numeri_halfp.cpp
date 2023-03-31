#include <iostream>
using namespace std;
int main()
{

    int row_count;
    int col_count;
    cout << "Enter the row count" << endl;
    cin >> row_count;

   
    for (int row = 1; row <= row_count; row++)
    {
        for (int col = 1; col <= row; col++)
        // col< row+1
        {
            cout << col << " ";
        }
        cout << endl;
    }

    
    //inverted 

    //  for (int row = 0; row < row_count; row++)
    // {
    //     for (int col = 1; col <= row_count - row; col++)
    //     // col< row+1
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}