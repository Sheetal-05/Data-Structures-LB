#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter the size" << endl;
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        // spaces print
        for (int col = 0; col < row; col++)
        {
            cout << "  ";
        }

        // star print
        for (int col = 0; col <= size; col++)
        {
            cout << "* ";
            cout << "  ";
        }

        cout << endl;
    }
    return 0;
}