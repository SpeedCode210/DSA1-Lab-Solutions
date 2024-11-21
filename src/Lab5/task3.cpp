#include <iostream>
#include <cmath>

using namespace std;

double requiredMonthlySavings(double goal, int nbMonths = 12){
    return goal/nbMonths;
}

int requiredMonths(double goal, double monthlySalary, double maxPercentage = 50){
    return ceil(100.0*goal/monthlySalary/maxPercentage);
}

int main(){
    int p;
    cout << "Choose the program (1/2): ";
    cin >> p;
    double goal;
    switch (p)
    {
    case 1:
        int months;
        cout << "What is your savings goal ? ";
        cin >> goal;
        cout << "Over how many months ? ";
        cin >> months;
        cout << "You should save " << requiredMonthlySavings(goal, months) << "DZD per month.\n";
        break;
    
    case 2:
        double salary, percentage;
        cout << "What is your savings goal ? ";
        cin >> goal;
        cout << "What's your monthly salary ? ";
        cin >> salary;
        cout << "What's the percentage of your salary you can save ? ";
        cin >> percentage;
        cout << "You should save for " << requiredMonths(goal, salary, percentage) << " months.\n";
        break;
    }
}