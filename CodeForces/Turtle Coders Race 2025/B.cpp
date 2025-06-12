#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

bool checkZero(char ch)
{
    if (ch == '0')
        return true;
    else if (ch == 'X')
        return false;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int count = 0;

    // for (int i = 0, j = 1; i < a.size(); i++, j++)
    // {
    //     if (checkZero(a[i]) && checkZero(a[j]) && (checkZero(b[i]) || checkZero(b[j])))
    //         count++;
    //     else if (checkZero(b[i]) && checkZero(b[j]) && (checkZero(a[i]) || checkZero(a[j])))
    //         count++;
    // }
    int countZero = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (checkZero(a[i]) && checkZero(b[i]))
            countZero++;
    }

    if (countZero == a.size())
    {
        for (int i = 0, j = 1; i < a.size(); i += 2, j += 2)
        {
            if (checkZero(a[i]) && checkZero(a[j]) && (checkZero(b[i]) || checkZero(b[j])))
                count++;
            else if (checkZero(b[i]) && checkZero(b[j]) && (checkZero(a[i]) || checkZero(a[j])))
                count++;
        }
    }
    else
    {
        for (int i = 0, j = 1; i < a.size(); i++, j++)
        {
            if (checkZero(a[i]) && checkZero(a[j]) && (checkZero(b[i]) || checkZero(b[j])))
                count++;
            else if (checkZero(b[i]) && checkZero(b[j]) && (checkZero(a[i]) || checkZero(a[j])))
                count++;
        }
    }


    if (a.size() <= 100 && b.size() <= 100)
    {
        cout << count << endl;
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