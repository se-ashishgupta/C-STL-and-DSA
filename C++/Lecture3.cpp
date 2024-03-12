#include <iostream>
using namespace std;

int main()
{
    // unsigned int a = -10; // unsinged me ham sirf +ve value ko store kara hai

    int i = 'a'; // main integer me char ko store kara to usne character ke corresponding asci value ko print

    char j = 97; // maine character me integer (ascii) ko store kara to uske corresponding character print kaar

    // cout << i << endl;
    // cout << j << endl;

    // char x = 129; // >>>>>>> -128
    // cout << x << endl;

    // char y = -127;
    // cout << y << endl;

    int x = INT32_MAX;
    x = x + 1;
    cout << x << endl;

    int y = INT32_MIN;
    cout << y << endl;

    return 0;
}