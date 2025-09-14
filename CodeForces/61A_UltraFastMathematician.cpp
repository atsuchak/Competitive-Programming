#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

bool checkNum(char st) {
    if(st == '1') return 1; 
    else return 0;
}

void solve() {
    string st, st2; cin >> st >> st2;
    vector<char>store;
    for(int i = 0; i < st.size(); i++) {
        if((checkNum(st[i]) && checkNum(st2[i])) || (!checkNum(st[i]) && (!checkNum(st2[i])))) store.push_back('0');
        else store.push_back('1');
    }
    for(auto &it: store) {
        cout << it;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}