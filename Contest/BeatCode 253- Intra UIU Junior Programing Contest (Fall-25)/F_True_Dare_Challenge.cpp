#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int mn = INT_MAX;
    for(int i = n-1; i >= 1; i--) 
        if(a[i] - a[i-1] < mn) mn = a[i] - a[i-1]; 
    
    cout << mn << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    while(t_case--) {
        solve();
    }

    return 0;
}