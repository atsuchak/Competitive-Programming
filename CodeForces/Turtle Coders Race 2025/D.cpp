#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve()
{
    int a = 10;
    int res = a - (a % 3);
    cout << a%3 << endl;
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t; cin >> t;
    // while(t--) {
    //     solve();
    // }

    solve();

    return 0;
}