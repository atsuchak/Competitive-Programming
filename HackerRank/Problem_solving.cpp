#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> store;
    bool chk = false;
    for (int x : a) {
        for (int i = 0; i < store.size(); i++) {
            if (abs(x - store[i]) >= k) {
                store[i] = x;
                chk = true;
                break;
            }
        }
        if (!chk) store.push_back(x);
    }

    cout << store.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin);
        freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}