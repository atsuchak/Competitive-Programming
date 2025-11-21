#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;  // cin >> t_case;

    while (t_case--) {
        int s, n;
        cin >> s >> n;

        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }

        sort(a.begin(), a.end());

        bool chk = 1;
        for (int i = 0; i < n; i++) {
            if (s >= a[i].first) s += a[i].second;
            else {
                chk = 0;
                break;
            }
        }

        if (chk)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}