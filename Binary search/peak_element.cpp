#include <iostream>
using namespace std;

// peak element is graetest element in a sorted array
void peak_element(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    while (start < end)
    {

         if (arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid ;
        }

        mid = start + (end - start) / 2;
    }
    
    cout<<start<<" "<<arr[start];

}


int main()
{

    int odd[10] = {2, 5, 7, 14, 20, 56, 99}; // 7
    int even[10] = {3, 8, 10, 17, 1};        // 5
    peak_element(odd, 7);
    cout<<endl;
    peak_element(even, 5);
   
    return 0;
}

