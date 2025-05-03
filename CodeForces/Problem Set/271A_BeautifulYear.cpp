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

    for (int i = (n + 1); ; i++)
    {
        string st = to_string(i);
        sort(all(st));
        st.erase(unique(all(st)), st.end());
        if (st.size() == 4)
        {
            cout << i << endl;
            break;
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