#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, s, e; cin >> n >> s >> e;

    if(n%2 == 0) {
        if((s%2 == 0 && e%2 != 0) || (s%2 != 0 && e%2 == 0)) {
            cout << -1 << endl;
            return;
        }
    }

    ll sum = 0, cnt = 0;
    while(s <= e) {
        sum += s;
        s += n;
    }

    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while(t_case--) {
        solve();
    }

    return 0;
}