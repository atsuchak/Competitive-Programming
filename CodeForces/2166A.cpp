#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1; cin >> t_case;

    while (t_case--) {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (st[i] != st[i + 1]) {
                st[i] = st[i + 1];
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}