#include <iostream>
using namespace std;
int main()
{

    int arr[20] = {1, 2, 3, 4, 3, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])

            {

                cout << "The duplicate element is : " << arr[i] << " ";
            }
        }
    }

    return 0;
}
