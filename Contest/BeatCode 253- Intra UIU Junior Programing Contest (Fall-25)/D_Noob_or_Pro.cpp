#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    int sum = 0;
    bool chk =0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];

        if(sum >= 2400) chk = 1;
    }
    
    if(chk) cout << "programmer" << endl;
    else cout << "noobgrammer" << endl;
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