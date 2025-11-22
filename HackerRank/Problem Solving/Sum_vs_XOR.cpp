#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;

    if(n == 1) {
        cout << 1 << endl;
        return;
    }

    int bits_cnt =0 ;
    long long temp = n;

    while(temp > 0) {
        if(temp%2 == 0) bits_cnt++;

        temp /= 2;
    }

    cout << (1LL << bits_cnt) << endl;
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