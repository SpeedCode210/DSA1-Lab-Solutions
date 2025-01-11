#include <iostream>
using namespace std;

void Hanoi(int level, char begin, char end, char inter)
{
    if (level == 1)
    {
        cout << "Move disk 1 from " << begin << " to " << end << '\n';
        return;
    }

    Hanoi(level-1, begin, inter, end);
    cout << "Move disk " << level << " from " << begin << " to " << end << '\n';
    Hanoi(level-1, inter, end, begin);
}

int main()
{
    Hanoi(3, 'A', 'C', 'B');
    return 0;
}