#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

void solve() {
    int n; cin >> n;

    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i > 0 && i < n-1 && a[i] == -1) a[i] = 0;
    }
    
    if(a[0] == -1 && a[n-1] == -1) a[0] = a[n-1] = 0;
    else if(a[0] == -1 && a[n-1] != -1) a[0] = a[n-1];
    else if(a[0] != -1 && a[n-1] == -1) a[n-1] = a[0];

    vi b(n-1);
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        b[i] = a[i+1] - a[i];
        sum += b[i];
    }

    cout << abs(sum) << endl;
    for(int it: a) cout << it << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}