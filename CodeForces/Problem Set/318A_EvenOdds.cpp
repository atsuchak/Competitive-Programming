#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    long long n, k; cin >> n >> k;
    long long oddCount = (n+1)/2;
    if(k <= oddCount) cout << (2*k)-1;
    else cout << 2 * (k - oddCount);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}