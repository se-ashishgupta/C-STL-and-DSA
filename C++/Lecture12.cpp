#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;

    // Sum of N Natural N0
    //  int sum = 0;
    //  for (int i = 0; i <= n; i++)
    //  {
    //      sum += i;
    //      // sum = sum + i;
    //  }

    // cout << sum;

    // Product of N Natural N0
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
        // product = product * i;
    }

    cout << product;

    return 0;
}