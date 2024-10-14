#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter your character : ";
    string s;
    getline(cin, s);
    char c = s[0];
    // The strings are ordered by ASCII value in order to perform binary search
    string vowels = "AEIOUYaeiouy";
    string consonants = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";

    // Binary search the character in the string vowels
    auto v = lower_bound(vowels.begin(), vowels.end(), c);
    if (v != vowels.end() && *v == c)
    {
        cout << c << " is a vowel\n";
        return 0;
    }

    // Binary search the character in the string consonants
    auto v2 = lower_bound(consonants.begin(), consonants.end(), c);
    if (v2 != consonants.end() && *v2 == c)
    {
        cout << "'" << c << "'" << " is a consonant\n";
        return 0;
    }

    cout << c << " is a special character\n";
}