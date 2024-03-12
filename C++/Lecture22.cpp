#include <iostream>
using namespace std;

int main()
{
    // int A[5] = {2, 4, 6, 8, 9};
    // int *p;

    // p = A; // Address of element 2

    // int *q = &A[3]; // Address of element 8
    // q = &A[3];

    // cout << p << endl;
    // cout << q << endl;

    // Arithmatics of pointer
    // cout << q - p << endl; // The output will be the relative distance(in terms of array elements) between p and q.
    // cout << (q + p) << endl;  // we cant add address of two loaction

    int x = 10;
    int &y = x;

    cout << x << endl;
    cout << y << endl;

    x++;
    cout << x << endl;

    y++;
    cout << x << endl;
    cout << y << endl;

    return 0;
}