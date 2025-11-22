#include <bits/stdc++.h>
using namespace std;

void solve() {
    string st;
    cin >> st;

    if (st[st.size() - 2] == 'A') {
        if (st[0] == '1' && st[1] == '2') {
            st[0] = '0';
            st[1] = '0';
        }
    } else {
        if (st[0] == '0') {
            st[0] = '1';
            st[1] += 2;
        } else if (st[0] == '1' && st[1] >= '0' && st[1] <= '1') {
            st[0] = '2';
            st[1] += 2;
        }
    }

    for (int i = 0; i < st.size() - 2; i++) cout << st[i];
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