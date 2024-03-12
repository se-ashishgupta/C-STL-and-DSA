#include <iostream>
using namespace std;

int main()
{
    // string fname, lname;

    // cout << "Enter Your Name: " << endl;

    // cin >> fname >> lname;

    // cout << "Your Name is " << fname << " " << lname << endl;

    string name;

    cout << "Enter Your Name: " << endl;

    // cin >> name;   //ye sapce ane ke bad sabko ignore karta hai isliye ye store nahi karega pure string ko
    getline(cin, name);

    cout << "Your Name is " << name << endl;

    return 0;
}
