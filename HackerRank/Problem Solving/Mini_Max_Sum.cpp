#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(5);  
    for(int i = 0; i < 5; i++) cin >> a[i];

    sort(a.begin(), a.end());
    
    long long sum = 0;
    for(int i = 0; i < 4; i++) sum += a[i];
    cout << sum << " ";
    
    sum = 0;
    for(int i = 1; i < 5; i++) sum += a[i];
    cout << sum << endl; 
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