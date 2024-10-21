#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));
    int sum = 0;
    for(int i = 0; i < 420; i++){
        sum += rand()%16 + 8;
    }

    cout << "Guess the sum : ";
    int k;
    cin >> k;
    cout << (k==sum ? "GG, correct guess !\n" : "Thanks for losing !\n");
}