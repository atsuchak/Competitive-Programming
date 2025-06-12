#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n, k; cin >> n >> k;
    string st; cin >> st;

    int count0 = 0, count1 = 0;

    for(char ch: st) {
        if(ch == '0') count0++;
        else count1++;
    }

    int totalPair = n/2;
    int badPair = totalPair - k;

    if (count0 < badPair || count1 < badPair) {
        cout << "NO" << endl;
        return;
    }

    int left0 = count0 - badPair;
    int left1 = count1 - badPair;

    if (left0 / 2 + left1 / 2 == k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t; 

    while(t--) {
        solve();
    }

    return 0;
}