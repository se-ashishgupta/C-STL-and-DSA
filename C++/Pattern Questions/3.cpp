#include <iostream>
using namespace std;

int main()
{
    int n = 4; // No of rows
    int m = 4; // No of cols

    // Uisng count,start (extra) variable
    // char start = 'A';
    // for (int row = 1; row <= n; row++)
    // {
    //     char count = start;
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << count << "  ";
    //         count--;
    //     }
    //     start++;
    //     cout << endl;
    // }

    // Uisng res (extra) variable
    // for (int row = 1; row <= n; row++)
    // {

    //     for (int col = 1; col <= row; col++)
    //     {
    //         char res = ('A' + row - col);
    //         cout << res << "  ";
    //     }
    //     cout << endl;
    // }

    // Uisng without (extra) variable
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row; col++)
        {
            cout << (char)('A' + row - col) << "  ";
        }
        cout << endl;
    }

    return 0;
}