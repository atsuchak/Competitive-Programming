#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    int in = 0, out = 0; 
    int total = 0;
    int curr = 0;
    for(int i = 0; i< n; i++) {
        cin >> out >> in;
        curr = curr - out + in;
        total = max(total, curr);
    }
    cout << total << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}