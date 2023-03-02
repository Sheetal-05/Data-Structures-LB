#include <iostream>
using namespace std;


void sort0(int arr[10]){

// int i = 0;
// int j = 8;

// while(i<=j){

//    while(arr[i] == 0  && i<j){
//     i++;
//    }
//    while(arr[j] == 1  && i<j){
//     j--;
//    }
   
// if(arr[i] == 1 && arr[j]==0 && i<j){
//    swap(arr[i], arr[j]);
//    i++;
//    j--;
// }

//  }



int start =0; 
int end = 9;
int i =0;
while(start<=end){

if(arr[i] == 0){
   swap(arr[i], arr[start]);
   i++;
   start++;
}
else{
   swap(arr[i], arr[end]);
   end--;
   // i++
}
}











}




int main()
{

int arr[10] = {1,0,1,1,0,1,0,1,1};

for(int i=0; i<9; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
// o are at left and 1 is at right 
// three approaches count 0 and 1 o(n^2) sort  two pointer approach o(n)  two pointer approch 
sort0(arr);
cout<<"The sorted array is : ";
cout<<endl;
for(int i=0; i<9; i++){
cout<<arr[i]<<" ";
}





return 0;
}