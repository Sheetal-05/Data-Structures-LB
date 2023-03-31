#include <iostream>
using namespace std;
int main()
{

    // pointer to an integer
    int a = 5;
    int *ptr = &a; //--> ptr is a pointer to integer data type{a} which stored the address of a

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << endl
         << endl
         << endl;

    // pointer to character array
    char ch[10] = "pointers";
    char *c = ch;
    cout << ch << endl;
    cout << c << endl;
    cout << &ch << endl;
    cout << &c << endl;
    cout << ch + 3 << endl;
    cout << *(ch + 3) << endl;
    cout << *(ch) << endl;
    cout << *(c) << endl;
    cout << endl
         << endl
         << endl;

    // single character
    char chara = 'k';
    char *cptr = &chara;
    cout << chara << endl;
    cout << cptr << endl;

    return 0;
}