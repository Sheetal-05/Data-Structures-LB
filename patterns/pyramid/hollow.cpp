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
        for (int col = 0; col < size - row; col++)
        {
            cout << "  ";
        }

        for (int i =0; i< (2* row +1); i ++){
            cout<<"* ";
         
        }

        

        cout << endl;
    }


return 0;
}