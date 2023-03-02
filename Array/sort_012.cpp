#include <iostream>
using namespace std;

void printA(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort012(int arr[], int size)
{

    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0 && mid <= high)
        {

            swap(arr[low], arr[mid]);
            low++;
            mid++;
            // printA(arr, size);
            // cout << endl;
        }

        if (arr[mid] == 1 && mid <= high)
        {
            mid++;
            // printA(arr, size);
            // cout << endl;
        }

        if (arr[mid] == 2 && mid <= high)
        {

            swap(arr[mid], arr[high]);
            high--;
            // printA(arr, size);
            // cout << endl;
        }
    }
}

int main()
{
    int arr[6] = {0, 1, 2, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"The given array is :"<<endl;
    printA(arr, size);
    cout << endl;
    cout<<"the sorted array is:"<<endl;
    sort012(arr, size);
    printA(arr, size);

    return 0;
}