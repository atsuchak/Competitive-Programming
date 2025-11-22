#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int space = n - 1, hash = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++)
            cout << " ";

        for (int j = 0; j < hash; j++)
            cout << "#";

        space--;
        hash++;
        cout << endl;
    }
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