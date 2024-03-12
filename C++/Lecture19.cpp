#include <iostream>
using namespace std;

int main()
{

    // Sum of All Element of Array
    // int arr[5] = {4, 5, 8, 9, 5};
    // int length = sizeof(arr) / sizeof(arr[0]);

    // int sum = 0;

    // for (int i = 0; i < length; i++)
    // {
    //     // sum = sum + arr[i];
    //     sum += arr[i];
    // }

    // for (int x : arr)
    // {
    //     sum += x;
    // }

    // cout << sum << endl;

    // 2D MATRIX

    // Derclaration and Intialisation
    int n = 2;
    int m = 3;
    int matrix[n][m] = {{1, 2, 3}, {4, 5, 6}};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (auto &x : matrix)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    // int matrix[n][m] = {{1}, {2}};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}