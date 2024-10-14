#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double marks[5];
    cout << "Please enter your 5 marks out of 20 : ";
    ios::sync_with_stdio(false);
    cin.tie(0);
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum += marks[i];
        cout << "The mark #" << i + 1 << "              : " << marks[i] << "/20\n";
    }
    cout << "The average of the marks : " << sum / 5.0 << "/20\n";
    cout << "The percentage scored    : " << sum << "%\n";
}