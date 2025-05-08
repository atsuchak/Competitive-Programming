#include <bits/stdc++.h>
using namespace std;

int value(char c) {
    if(c == 'I') return 1;
    if(c == 'V') return 5;
    if(c == 'X') return 10;
    if(c == 'L') return 50;
    if(c == 'C') return 100;
    if(c == 'D') return 500;
    if(c == 'M') return 1000;
}

int chngToInt(string s) {
    int total = 0;
    int prev = 0;

    for(int i = s.size()-1; i >= 0; i--) {
        int curr = value(s[i]);

        if(curr < prev) {
            total -= curr;
        }else {
            total += curr;
        }
        
        prev = curr;
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    getline(cin, s);

    cout << chngToInt(s);

    return 0;
}