#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void check(char ch)
{
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        bool x = false;
        for (int i = 0, j = 1, k = st.size()-1, l = st.size()-2; i < st.size(); i++, j++, k--, l--)
        {
            if ((st[i] == st[j] == 'a') && (st[k] == st[l] == 'b'))
            {
                x = true;
                break;
            }
        }
        if (x)
            cout << "YEs";
        else
            cout << "No";
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