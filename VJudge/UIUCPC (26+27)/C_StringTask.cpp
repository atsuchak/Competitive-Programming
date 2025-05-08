#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int vowelCheck(char c) {
    if(c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
        return 1;
    }else return 0;
}
void solve() {
    string st; cin >> st;
    for(int i = 0; i < st.size(); i++) {
        st[i] = tolower(st[i]);
    }
    for(char c: st) {
        if(!vowelCheck(c)) {
            cout << "." << char(c);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}