#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p1; // Declare
    p1 = {10, 20};     // Initialize

    cout << p1.first << " " << p1.second << endl; // Use

    pair<char, int> p2 = {'A', 10};
    cout << p2.first << " " << p2.second << endl; // Use

    int arr[5]; //[1,2,3,4,5]

    pair<int, int> arr1[2]; // [{1,2}, {3,4}]
    arr1[0] = {1, 2};
    arr1[1] = {3, 4};

    int sizeOfArray = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr1[i].first << " " << arr1[i].second << endl;
    }

    pair<int, int> p3 = make_pair(10, 12);
    pair<int, int> p4 = {12, 10};

    cout << (p3 == p4) << endl;
    cout << (p3 >= p4) << endl;
    cout << (p3 <= p4) << endl;
    cout << (p3 > p4) << endl;
    cout << (p3 < p4) << endl;

    return 0;
}
