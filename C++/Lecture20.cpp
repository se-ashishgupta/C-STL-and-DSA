#include <iostream>
using namespace std;

int main()
{
    int a = 10; // 0x61ff0c = Address of variable a
    int *p;
    p = &a;

    cout << &a << endl;
    cout << p;

    return 0;
}