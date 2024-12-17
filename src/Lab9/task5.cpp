#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Date
{
    int Year;
    int Month;
    int Day;

    bool operator<(Date d)
    {
        if (this->Year < d.Year)
            return true;
        if (this->Year > d.Year)
            return false;
        if (this->Month < d.Month)
            return true;
        if (this->Month > d.Month)
            return false;
        if (this->Day < d.Month)
            return true;
        return false;
    }
    bool operator>(Date d)
    {
        return d.operator<(*this);
    }
};

struct Adress
{
    string Street;
    string City;
    string PostalCode;
};

struct Contact
{
    string LastName;
    string FirstName;
    vector<string> PhoneNumbers;
    Date BirthDate;
    Adress ContactAdress;
};

Contact GetContactFromInput()
{
    cout << "Enter Last Name : \n";
    string l;
    getline(cin, l);
    cout << "Enter First Name : \n";
    string f;
    getline(cin, f);
    cout << "How Many Phone Numbers ? ";
    int n;
    cin >> n;
    vector<string> phones(n);
    for (int i = 0; i < n; i++)
    {
        cin >> phones[i];
    }
    cout << "Enter Birth date as dd/mm/yyyy : ";
    string date;
    cin >> date;

    auto getint = [&](string k, int begin, int end)
    {
        int res = 0;
        for (int i = begin; i <= end; i++)
        {
            res = res * 10 + k[i] - '0';
        }
        return res;
    };

    Date d = {
        getint(date, 6, 9),
        getint(date, 3, 4),
        getint(date, 0, 1)};

    cin.ignore();
    string s, c, p;
    cout << "Enter street : \n";
    getline(cin, s);
    cout << "Enter city : \n";
    getline(cin, c);
    cout << "Enter postal code : \n";
    getline(cin, p);
    Adress addr = {s, c, p};

    return {l, f, phones, d, addr};
}

void DisplayDate(Date d)
{
    cout << d.Day << '/' << d.Month << '/' << d.Year << '\n';
}

void DisplayAdress(Adress a)
{
    cout << a.Street << ", " << a.City << "  " << a.PostalCode << '\n';
}

void DisplayContact(Contact c)
{
    cout << c.FirstName << ' ' << c.LastName << '\n';
    cout << "Birthdate : ";
    DisplayDate(c.BirthDate);
    if (c.PhoneNumbers.size())
        cout << "Phone Numbers :\n";
    for (auto nb : c.PhoneNumbers)
        cout << nb << '\n';
    cout << "Adress :\n";
    DisplayAdress(c.ContactAdress);
}

int main()
{
    const int nbContacts = 1;
    vector<Contact> contacts(nbContacts);
    for (int i = 0; i < nbContacts; i++)
    {
        cout << "#Contact " << i + 1 << "\n";
        contacts[i] = GetContactFromInput();
    }

    Date comparaison = {2000, 3, 5};
    cout << "Here are the contacts born after 05/03/2000 and living in a place where the postal code begins with \"03\".\n";

    for (int i = 0; i < nbContacts; i++)
    {
        if (contacts[i].BirthDate > comparaison && contacts[i].ContactAdress.PostalCode.substr(0, 2) == "03")
        {
            DisplayContact(contacts[i]);
        }
    }
}