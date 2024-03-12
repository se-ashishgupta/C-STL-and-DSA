#include <iostream>
using namespace std;

int main()
{

    // Pre Inc/Dec Operator

    // int a = 5, y;
    // y = --a;

    // cout << "Value of a is " << a << endl;
    // cout << "Value of y is " << y;

    // Post Inc/Dec Operator

    // int x = 10, y;
    // y = x--;

    // cout << "Value of x is " << x << endl;
    // cout << "Value of y is " << y;

    // Example Pre Post Operator

    // int x = 6;
    // int z = x++ * 6;
    // cout << "Value of z is " << z << " Value of x is " << x << endl;

    // int x1 = 6;
    // int z1 = ++x1 * 6;
    // cout << "Value of z1 is " << z1 << " Value of x1 is " << x1 << endl;

    // Bitwise Operator

    int x = 5;
    int y = 6;

    // int z = x & y;
    // int z = x | y;
    // int z = ~x;

    int z = x ^ y;

    cout << z << endl;

    return 0;
}