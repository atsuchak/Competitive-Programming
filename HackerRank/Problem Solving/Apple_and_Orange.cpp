#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s, t; cin >> s >> t;
    int a, b; cin >> a >> b;
    int m, n; cin >> m >> n;

    int ap[m], apStore[m];
    int apCnt = 0;
    
    for(int i = 0; i < m; i++) {
        cin >> ap[i];
        apStore[i] = a+ap[i];
        if(apStore[i] >= s && apStore[i] <= t) apCnt++;
    }
    
    int orr[n], orrStore[n];
    int orrCnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> orr[i];
        orrStore[i] = b+orr[i];
        if(orrStore[i] >= s && orrStore[i] <= t) orrCnt++;
    }

    cout << apCnt << endl << orrCnt << endl;
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