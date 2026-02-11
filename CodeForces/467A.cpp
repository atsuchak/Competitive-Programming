#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int t; cin >> t;
    int a[t], b[t];
    for(int i = 0; i < t; i++) {
        cin >> a[i] >> b[i];
    }
    int count = 0;
    for(int i = 0; i < t; i++) {
        if(b[i]-a[i] >= 2) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}