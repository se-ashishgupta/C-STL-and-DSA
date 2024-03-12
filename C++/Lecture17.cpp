#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 10; // Varibale declare intiger data type

    // int arr[5]; // array declare

    // vector<int> vec;
    // vec = {1, 2, 3};

    // int arr[5];                //aise array me initialisation nahi kar skate
    // arr = {1, 2, 3, 4, 5};

    // 1- give garbage value when we escess index whixh are not available in array
    //   int arr[5] = {1, 2, 3, 4, 5};
    //   cout << arr[5];

    // 2- length se jada value nahi rakh sakte
    //   int arr[5] = {1, 2, 3, 4, 5, 6};

    // 3- length se kam value rakh sakte hai array me
    //  int arr[5] = {1, 2};

    // 4- Agar index available hai but us index pe koi value nahi hia to by default 0 value hota hai
    //  int arr[5] = {1, 2};
    //  cout << arr[4];

    // 5- ham length nahi denge to chalega
    // int arr[] = {1, 2, 5};
    // cout << arr[0];

    // LENGTH OF ARRAY
    // int arr[] = {1, 2, 4};
    // cout << sizeof(arr); // ye array ka szie print karega

    // int sizeOfArray = sizeof(arr);
    // int sizeOfFirstElement = sizeof(arr[0]);
    // int lengthOfArray = sizeOfArray / sizeOfFirstElement;
    // int lengthOfArray = sizeof(arr) / sizeof(arr[0]);
    // cout << lengthOfArray;

    // PRINT ELEMENT OF ARRAYS
    // int n = 6;
    // int arr[n] = {1, 2, 3, 4, 5, 6}; // 1 2 3 4 5 6

    // // cout << arr[0];
    // // cout << arr[1];
    // // cout << arr[2];
    // // cout << arr[3];
    // // cout << arr[4];
    // // cout << arr[5];

    // // Iterate to every element of array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Input BY USER ELEMENT OF ARRAYS
    int n;
    cout << "Enter the length of Array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Start Entering the element of array: " << endl;

    // // Iterate to every index of array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Element of array are: ";

    // // Iterate to every element of array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}