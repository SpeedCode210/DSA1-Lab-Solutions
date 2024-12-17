#include<iostream>
#include "./sorting.h"
using namespace std;

int main(){
    string s;
    cin >> s;
    string s1 = s;
    string s2 = s;
    string s3 = s;
    bubble_sort(s1,s.size());
    selection_sort(s2,s.size());
    insertion_sort(s3,s.size());
    cout << s1 << '\n';
    cout << s2 << '\n';
    cout << s3 << '\n';
}