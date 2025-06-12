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
    int countA = 0, countB = 0;
    for (int i = 0, j = 1; i < st.size(); j++, i++)
    {
        if (st[i] == 'a' && st[j] == 'a')
        {
            countA++;
        }
    }
    for (int i = 0, j = 1; i < st.size(); j++, i++)
    {
        if (st[i] == 'b' && st[j] == 'b')
        {
            countB++;
        }
    }
    if (countA >= 1 && countB >= 1) cout << "YES" << endl;
    else if((countA >= 2 && countA == st.size()-1) || (countB >= 2 && countB == st.size()-1)) cout << "YES" << endl;
    else cout << "NO" << endl;
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