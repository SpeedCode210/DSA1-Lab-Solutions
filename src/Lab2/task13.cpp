#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter your character : ";
    string s;
    getline(cin, s);
    char c = s[0];
    cout << "The ASCII code of '" << c << "' is " << ((int)c) << '\n';
}