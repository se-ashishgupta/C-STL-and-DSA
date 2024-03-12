#include <iostream>
using namespace std;

void swapFunction(int x, int y) // Call by value
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << endl;
    cout << y << endl;
}
void swapFunctionAddress(int *x, int *y) // Call by Address
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapFunctionReferance(int &x, int &y) // Call by Refarance
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    // swapFunction(a, b); // Call by value

    // swapFunctionAddress(&a, &b); // Mera Banaya Hua function // Call by Address
    // swap(a, b);                  // Ye C++ banaya hua function

    swapFunctionReferance(a, b); // Call by referance
    swap(a, b);                  // Ye C++ banaya hua function

    cout << "After swap Function" << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}