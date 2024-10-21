#include <iostream>
using namespace std;

char compare(double mean){
    if(mean >= 90) return 'A';
    if(mean >= 70) return 'B';
    if(mean >= 50) return 'C';
    return 'F';
}

int main(){
    double quiz, midterm,finals;
    cout << "Please enter your quiz, midterm and final scores : ";
    cin >> quiz >> midterm >> finals;
    double mean = (quiz+midterm+finals)/3.0;
    cout << "grade=" << compare(mean) << '\n';
}