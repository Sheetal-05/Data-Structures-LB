#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapa(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            // swap(arr[i], arr[i + 1]);
            int temp;
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{

    int even[10] = {3, 6, 5, 7, 4, 6, 8, 2, 3, 4};
    int odd[5] = {5, 4, 3, 6, 7};
    swapa(even, 10);
    print(even, 10);
    swapa(odd, 5);
    print(odd, 5);

    return 0;
}