#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the NO: " << endl;
    cin >> n;

    if (n == 1)
    {
        cout << "No is not Prime" << endl;
    }

    int i;

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "No is not Prime" << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << "No is Prime" << endl;
    }

    return 0;
}
