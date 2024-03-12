#include <iostream>
using namespace std;

int addition()
{
    int a, b;
    cin >> a >> b;

    int c = a + b;
    return c;
}
void additionVoid()
{
    int a, b;
    cin >> a >> b;

    int c = a + b;
    cout << c << endl;
}

int main()
{
    // int res = addition();
    // cout << res << endl;

    additionVoid();

    return 0;
}