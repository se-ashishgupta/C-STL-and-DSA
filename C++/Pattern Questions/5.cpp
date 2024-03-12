#include <iostream>
using namespace std;
// HomeWork
int main()
{
    int n = 4; // No of rows
    int m = 4; // No of cols

    for (int row = 1; row <= n; row++)
    {

        // This loop is for printing space
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }

        // This loop is for printing star
        for (int star = 1; star <= row; star++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}