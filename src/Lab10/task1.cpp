#include <iostream>
using namespace std;

void printUntil(int end)
{
    if(end==0) return;
    
    printUntil(end-1);
    cout << end << '\n';
}

int main()
{
    printUntil(50);
    return 0;
}