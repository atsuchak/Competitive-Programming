#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    int p[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            if(p[j] == i) {
                cout << j+1 << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}