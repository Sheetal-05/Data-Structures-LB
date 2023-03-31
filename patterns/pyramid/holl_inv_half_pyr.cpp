#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of pyramid" << endl;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        if (row == 0)
        {
            for (int col = 0; col < size; col++)
            {
                cout << "* ";
            }
        }

        else if (row == size - 1)
        {
            cout << "* ";
        }
        // remaining rows
        else
        {

            cout << "* ";

            // space  = size -3
            for (int col = 0; col < size - row - 2; col++)
            {
                cout << "  ";
            }

            // last star
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

 