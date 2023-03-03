#include <iostream>
using namespace std;

// unique element xor ^ 2^2 = 0 but 0^n =n

int main()
{
    int arr[11] = {3, 6, 3, 5, 6, 8, 5, 8, 7, 2, 7};
    int count = 0;
    for (int i = 0; i < 11; i++)
    {
        count = count ^ arr[i];
    }

    cout << count;

    return 0;
}