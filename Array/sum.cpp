#include <iostream>
using namespace std;
int main()
{

int x[10] = {1, 2, 3, 4, 5, 6, 7};
int y[10] = {3, 5, 7, 8, 9};
int s = 6;

for(int i=0; i<7; i++){
      for(int j=0; j<5; j++){
        if(x[i] + y[j] == s){
            cout<<x[i]<<","<<y[j]<<endl;

        }
        }
}






return 0;
}