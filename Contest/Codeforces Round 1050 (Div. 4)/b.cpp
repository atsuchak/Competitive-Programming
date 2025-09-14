#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while (t--) {
        int n, m, x, y; cin >> n >> m >> x >> y;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        int k = lower_bound(a.begin(), a.end(), y) - a.begin();
        int l = lower_bound(b.begin(), b.end(), x) - b.begin();

        cout << min(2, k) + min(2, l) << endl;
    }
    return 0;
}