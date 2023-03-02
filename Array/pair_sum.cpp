#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // pair sum
    vector<int> v1 = {1, 3, 5, 7, 2, 4, 6};
    // vector<int> v2={1,2,4,5,3,6};
    int sum = 9;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[i] + v1[j] == sum)
            {

                cout << "{" << v1[i] << "," << v1[j] << "}" << endl;
            }
        }
    }

    return 0;
}