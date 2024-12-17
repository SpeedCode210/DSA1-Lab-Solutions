#include <iostream>
#include <algorithm>
using namespace std;

struct Book
{
    string Title;
    string Author;
    int YearPublished;
    int NumPages;
    float Price;
};

Book InputBook()
{
    string t, a;
    int y, n;
    float p;
    cout << "Enter Title : ";
    getline(cin, t);
    cout << "Enter Author : ";
    getline(cin, a);
    cout << "Enter Publicaiton Year : ";
    cin >> y;
    cout << "Enter Number of Pages : ";
    cin >> n;
    cout << "Enter Price : ";
    cin >> p;
    cin.ignore();
    return {t, a, y, n, p};
}

void OutputBook(Book b)
{
    cout << "Title: " << b.Title << endl;
    cout << "Author: " << b.Author << endl;
    cout << "Year Published: " << b.YearPublished << endl;
    cout << "Number of Pages: " << b.NumPages << endl;
    cout << "Price: " << b.Price << endl;
}

int main()
{
    Book hi[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Book #" << i + 1 << '\n';
        hi[i] = InputBook();
    }
    sort(hi, hi + 5, [&](const Book a, const Book b)
         { return a.YearPublished < b.YearPublished; });

    cout << "-------- OUTPUT ---------\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Book #" << i + 1 << " Details:" << endl;
        OutputBook(hi[i]);
    }
}