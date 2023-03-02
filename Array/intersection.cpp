#include <iostream>
using namespace std;
int main()
{

    // int arr1[10]={1,2,5,3,4,5,6};
    // int arr2[10]={5,6,7,2,9,2,8};
    // for(int i=0; i<7; i++){
    //   for(int j=0; j<7; j++){
    //     if(arr1[i] == arr2[j]){
    //         cout<<"the intersection of two arrays is: ";
    //         cout<<arr1[i];
    //         //update the value so that it cannot map again
    //         arr2[j] = INT32_MIN;
    //         cout<<endl;
    //         break;

    //     }

    //   }




    // if the array is sorted in increasing order then optimised solution will be o(n)

    int x[10] = {1, 2, 3, 4, 5, 6, 7};
    int y[10] = {3, 5, 7, 8, 9};

    int i = 0;
    int j = 0;
    while (i < 7 && j < 5)
    {
        if (x[i] == y[j])
        {
            cout << x[i] << endl;
            i++;
            j++;
        }

        else if (x[i] < y[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return 0;
}