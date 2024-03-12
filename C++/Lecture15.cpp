#include <iostream>
using namespace std;

int main()
{
    int n = 4; // No of rows
    int m = 4; // No of columns

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 1    2   3    4    5
    //****
    //****
    //****
    //****

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 1    2   3    4    5
    //*
    //**
    //***
    //****

    return 0;
}
