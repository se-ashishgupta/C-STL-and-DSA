#include <iostream>
using namespace std;

int main()
{
    int n = 4; // No of rows
    int m = 4; // No of cols

    int count = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= m; col++)
        {
            cout << count << "  ";
            count++;
        }
        cout << endl;
    }

    // Output
    // 11  12  13  14
    // 15  16  17  18
    // 19  20  21  22
    // 23  24  25  26
    return 0;
}