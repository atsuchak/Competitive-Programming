#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    string st; cin >> st;
    if(st.find('H') != string::npos) cout << "YES";     
    else if(st.find('Q') != string::npos) cout << "YES";     
    else if(st.find('9') != string::npos) cout << "YES";     
    // else if(st[0] == '+') cout << "YES";     
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}