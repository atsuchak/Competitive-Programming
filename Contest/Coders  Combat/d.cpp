#include <bits/stdc++.h>
using namespace std;

#define ff first 
#define ss second 
#define all(x) (x).begin(), (x).end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        if(a+b == n || a+c == n || b+c == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}