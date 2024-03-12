#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<int> v; // Decleration

    v.push_back(10); // To put value in vector
    v.push_back(20);
    v.emplace_back(30); // To put value in vector
    v.emplace_back(40);
    //[10,20,30,40]

    // cout << v[0] << endl;
    // cout << v[1] << endl;

    pair<int, int> arr[5];     // Array of pairs
    vector<pair<int, int>> vp; // Vector of pairs
    vp.push_back({1, 2});
    vp.push_back({3, 4});

    // cout << vp[0].first << " " << vp[1].first << endl;

    vector<int> v1(5);
    // cout << v1[4] << endl;

    vector<int> v2(5, 10);
    // cout << v2[4] << endl;

    // Iterator
    

    return 0;
}
