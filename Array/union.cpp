#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // union of two arrays

    int v1[5] = {5, 2, 4, 6, 3};
    int v2[3] = {8, 9, 7};

    int va = 5;
    int vb = 3;

    vector<int> ans;

    // v1
    for (int i = 0; i < va; i++)
    {
        ans.push_back(v1[i]);
    }

    // v2
    for (int i = 0; i < vb; i++)
    {
        ans.push_back(v2[i]);
    }

    // print
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }


    

    // intersection:-

    // int v1[5] = {5, 2, 4,2, 6, 3};
    // int v2[3] = {2, 9, 6};

    // for(int i =0; i<va; i++){
    //     for(int j =0; j<vb; j++){
    //         if(v1[i] == v2[j]){
    //             ans.push_back(v2[j]);
                    // v2[j]= -1;
    //         }
    //     }
    // }

    return 0;
}