#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    string st; cin >> st;

    string toFind = "hello";
    int total = 0;

    for(int i = 0, j = 0; i < st.size(); i++) {
        if(st[i] == toFind[j]) {
            j++;
            total++;
        }
    }
    if(total == 5) {
        cout << "YES";
    }else {
        cout << "NO";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}