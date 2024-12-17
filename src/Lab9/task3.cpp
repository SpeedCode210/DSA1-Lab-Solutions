#include <iostream>
using namespace std;

struct Time
{
    int Hours;
    int Minutes;
    int Seconds;

    Time operator-(Time a)
    {
        int hours = 0;
        int minutes = 0;
        int seconds = 0;
        seconds = this->Seconds - a.Seconds;
        if (seconds >= 60)
        {
            seconds -= 60;
            minutes++;
        }
        else if (seconds < 0)
        {
            seconds += 60;
            minutes--;
        }
        minutes += this->Minutes - a.Minutes;
        if (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
        else if (minutes < 0)
        {
            minutes += 60;
            hours--;
        }
        hours += this->Hours - a.Hours;

        return {hours, minutes, seconds};
    }

    bool operator<(Time a)
    {
        if (this->Hours < a.Hours)
            return true;
        if (this->Hours > a.Hours)
            return false;
        if (this->Minutes < a.Minutes)
            return true;
        if (this->Minutes > a.Minutes)
            return false;
        if (this->Seconds < a.Minutes)
            return true;
        return false;
    }

    bool operator>(Time a){
        return a.operator<(*this);
    }

    bool operator==(Time a){
        return (!a.operator<(*this) && !a.operator>(*this));
    }
};

int main(){
    Time a = {3,40,12};
    Time b = {2,50,3};
    Time c = a - b;
    cout << c.Hours << ':' << c.Minutes << ':' << c.Seconds << '\n';
}