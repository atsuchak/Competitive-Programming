#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string st; cin >> st;
        int ans = 0, count = 0;
        for (int i = 0; i < n; i++) {
            if (st[i] == '.') {
                ans++;
                count++;
            } else {
                count = 0;
            }
            if (count >= 3) break;
        }
        if (count >= 3) cout << 2 << endl;
        else cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}