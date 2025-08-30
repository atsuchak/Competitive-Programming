#include <bits/stdc++.h>
using namespace std;

#define ff first 
#define ss second 
#define all(x) (x).begin(), (x).end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st; cin >> st;

    if(st == "-") {
        long long n; cin >> n;
        if(n%3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else {
        vector<char> ch;
        for(auto it: st) ch.push_back(it);
        
        long long sum = 0;
        for(auto it: ch) {
            sum += it - '0';
        }

        if(sum % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}