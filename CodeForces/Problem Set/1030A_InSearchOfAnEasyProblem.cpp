#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            count++;
        }else {
            cout << "HARD" << endl;
            break;
        }
    }
    if(count == n) {
        cout << "EASY" << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}