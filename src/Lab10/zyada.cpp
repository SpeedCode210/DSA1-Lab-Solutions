#include <bits/stdc++.h>
using namespace std;

string to_display = "";

void show_permutations(string &s, int begin){
    if(begin == s.size()) {
        cout << to_display << '\n';
        return;
    }
    for(int i = 0; i < s.size(); i++){
        if(to_display[i] != ' ') continue;
        to_display[i] = s[begin];
        show_permutations(s, begin+1);
        to_display[i] = ' ';
    }
}

int main(){
    string s = "1234";
    to_display = string(s.size(), ' ');
    show_permutations(s, 0);
}