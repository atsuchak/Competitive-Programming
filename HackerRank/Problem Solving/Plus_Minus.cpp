#include <bits/stdc++.h>
using namespace std;

void solve() {
    double n;
    cin >> n;

    double pos = 0, neg = 0, zer = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zer++;
    }

    // cout << pos << " " << neg << " " << zer << " " << endl;
    cout << fixed << setprecision(6) << (pos / n) << endl
         << (neg / n) << endl
         << (zer / n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}