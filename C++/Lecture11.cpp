#include <iostream>
using namespace std;

int main()
{

    // int a = 5;
    // int b;
    // b = a++;

    // cout << b << endl;
    // cout << a << endl;

    // Print Table
    int n;
    cout << "Enter the Number to find Table<<Endl" << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {

        int x = n * i;
        cout << n << " * " << i << " = " << x << endl;
    }

    // Sum of n Natural Number

    return 0;
}