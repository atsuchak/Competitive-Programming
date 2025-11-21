#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

bool isPrime(ll n) {
    if(n < 2) return 0;

    if(n == 2 || n == 3) return 1;

    for(int i = 2; i <= sqrt(n); i++) 
        if(n%i == 0) return 0;

    return 1;
}

void solve() {
    ll n; cin >> n;

    ll ans = sqrt(n);

    if(ans*ans == n) {
        if(isPrime(ans)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else cout << "NO" << endl;
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