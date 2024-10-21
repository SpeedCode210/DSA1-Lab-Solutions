#include <iostream>
using namespace std;

void showLevel(char c, int sep, int nbStars, int width)
{
    for (int i = 0; i < width; i++)
    {
        cout << ((i >= (width - nbStars) / 2 && i < (width + nbStars) / 2) ? c : ' ');
        
        for (int j = 0; j < sep; j++)
            cout << ' ';
    }
    cout << endl;
}

int main()
{
    int h, sep, rev;
    char c;
    cout << "Enter the height of the pyramid: ";
    cin >> h;
    cout << "Enter the symbol to use for the pyramid: ";
    cin >> c;
    cout << "Enter the number of spaces to use for padding: ";
    cin >> sep;
    cout << "Reverse the pyramid (0 for no, 1 for yes, 2 to get a rhombus): ";
    cin >> rev;
    int width = 2 * h - 1;
    for (int i = 0; i < h; i++)
    {
        showLevel(c, sep, rev == 1 ? width - 2 * i : 2 * i + 1, width);
    }

    if (rev == 2)
    {
        for (int i = 1; i < h; i++)
        {
            showLevel(c, sep, width - 2 * i, width);
        }
    }
}