#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int t; cin >> t;
    int count = 0;
    while(t--) {
        int n; cin >> n;
        while(n > 0) {
            if(n%10 == 4) {
                count++;
            }
            n /= 10;
        }
        cout << count << endl;
        count = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}