#include <bits/stdc++.h>
using namespace std;

void solve() {
    int alice_cnt = 0, bob_cnt = 0;

    vector<int> alice(3);
    for (int i = 0; i < 3; i++) cin >> alice[i];

    vector<int> bob(3);
    for (int i = 0; i < 3; i++) cin >> bob[i];

    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i])
            alice_cnt++;
        else if((bob[i] > alice[i]))
            bob_cnt++;
    }

    cout << alice_cnt << " " << bob_cnt << endl;
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