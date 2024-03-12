#include <iostream>
using namespace std;

int main()
{

    // int *p;
    // p = new int[4];
    // p[0] = 5;
    // p[1] = 15;
    // p[2] = 25;
    // p[3] = 35;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout << *p << endl;
    //     p++;
    //     i++;
    // }

    int n;
    cout << "Enter the size: " << endl;
    cin >> n;

    int *p;
    p = new int[n];

    cout << "Enter the element" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int i = 0;
    while (i < n)
    {
        cout << *p << " ";
        p++;
        i++;
    }

    // delete[] p;
    // p = NULL;
    p = nullptr;

    return 0;
}