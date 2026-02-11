#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0 && i != n) {
            cout << "I love that ";
        } else if(i % 2 != 0 && i != n) {
            cout << "I hate that ";
        }else if(i % 2 == 0 && i == n) {
            cout << "I love it ";
        }else {
            cout << "I hate it ";
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