#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    int l_to_r = 0, r_to_l = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j) l_to_r += a[i][j];
            if(i+j == n-1) r_to_l += a[i][j];
        }
    }

    // cout << l_to_r << " " << r_to_l << endl;
    cout << abs(l_to_r - r_to_l) << endl;
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