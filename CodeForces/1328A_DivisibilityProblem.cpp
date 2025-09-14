#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        for (int i = 0; ; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x % y == 0) {
                cout << i << endl;
                break;
            }
            else {
                cout << y - x % y << endl;
                break;
            };
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}