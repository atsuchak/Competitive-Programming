#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve()
{
    int t;
    cin >> t;
    int count = 0;
    string st, store;
    for(int i = 0; i < t; i++) {
        cin >> st;
        if(i == 0 || st != store) count++;
        store = st;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}