#include <iostream>

using namespace std;

int main()
{
    // int x = 5;
    // int y;

    // Left shift
    //  y = x << 2;

    // Right Shift
    //  y = x >> 2;

    int x = INT32_MIN;
    int y;

    y = x >> 1;

    cout << y << endl; // half the value using leftshift operator
    cout << x / 2;     // half the value using arithmetic divide operator

    return 0;
}