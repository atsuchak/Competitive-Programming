#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n <= 3) {
        cout << "NO" << endl;
        return;
    }

    if(n == 4 || n == 9) {
        cout << "YES" << endl;
        return;
    }


    // cout << ceil(6.1) << endl;
    long long tmp = sqrt(n);
    if (ceil(sqrt(n)) == tmp || tmp * tmp == n) {
        if (tmp % 2 == 0 || tmp % 3 == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    } else
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}