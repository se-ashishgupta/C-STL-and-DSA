#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 5;

    // 1- By this we can initialize the elemnt of array with zero
    //  int arr[n] = {0};

    // 2- By this we can initialize all the elemnt of array with any no
    // int arr[n] = {1, 1, 1, 1, 1};

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = 1;
    // }

    // int arr[n];
    // fill(arr, arr + n, 1);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // FOR EACH LOOP  Used only wiht collection of element
    int arr[n] = {1, 2, 3, 4, 5};
    for (int &x : arr)
    {
        cout << ++x << " ";
    }

    cout << endl;
    cout << arr[1];
    return 0;
}