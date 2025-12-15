#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, t; cin >> n >> t;

    vector<int> a(n);
    int total = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n == 1) {
        if(a[0] <= t) cnt1++;
        else if(2*a[0] <= t) cnt2++;
    }else {
        for(int i = 0; total-a[i] <= t; i++) {
            total += a[i]*2;
            cnt1++;
        }

        sort(a.begin(), a.end());
        total = 0;
        for(int i = 0; total - a[i]/2 <= t; i++) {
            total += (a[i]*2 + a[i]/2);
            cnt2++;
        }
    }

    if(cnt2 > cnt1 || cnt1 == n && cnt2 == n) cout << "Sabbir Vai er Soinik, CP Kore Doinik" << endl;
    else cout << "Dhur Chatar Matha" << endl;

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