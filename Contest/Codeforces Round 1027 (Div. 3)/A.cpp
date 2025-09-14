#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve()
{
    string st;
    cin >> st;

    int year = stoi(st);
    int year_sqrt = (int)sqrt(year);

    if (year_sqrt * year_sqrt == year) cout << "0 " << year_sqrt << endl;
    else cout << "-1" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}