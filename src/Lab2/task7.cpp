#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string, int>> hi = {
        {"bool", sizeof(bool)},
        {"char", sizeof(char)},
        {"short", sizeof(short)},
        {"int", sizeof(int)},
        {"float", sizeof(float)},
        {"long", sizeof(long)},
        {"double", sizeof(double)}};

    cout << "Here are the sizes of the most common data types in C++ :\n";

    for (auto k : hi)
        cout << "The size of the datatype " << k.first
             << " is equal to " << k.second << (k.second == 1 ? " byte\n" : " bytes\n");
}