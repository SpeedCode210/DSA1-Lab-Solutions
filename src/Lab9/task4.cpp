#include <iostream>
using namespace std;

struct Complex
{
    double Re;
    double Im;

    Complex operator+(Complex a)
    {
        return {this->Re + a.Re, this->Im + a.Im};
    }

    Complex operator-()
    {
        return {-this->Re, -this->Im};
    }

    Complex operator-(Complex a)
    {
        return {this->Re - a.Re, this->Im - a.Im};
    }
};

Complex GetComplexFromInput()
{
    double a, b;
    char c;
    char d;
    cin >> a >> c >> d >> b;
    if (cin.fail() || c != '+' || d != 'i')
        throw "Invalid Complex Number !";
    return {a, b};
}

void DisplayComplex(Complex c)
{
    cout << c.Re << " + i" << c.Im << '\n';
}

int main()
{
    cout << "Enter two complex numbers a+ib :\n";
    auto x = GetComplexFromInput();
    auto y = GetComplexFromInput();
    cout << "The sum is : ";
    DisplayComplex(x + y);
}