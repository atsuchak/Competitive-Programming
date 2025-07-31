#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

bool checkLetter(char ch)
{
    if (ch == 'a')
        return 1;
    else if (ch == 'b')
        return 1;
    else if (ch == 'c')
        return 1;
    else if (ch == 'd')
        return 1;
    else if (ch == 'e')
        return 1;
    else if (ch == 'f')
        return 1;
    else if (ch == 'g')
        return 1;
    else if (ch == 'h')
        return 1;
    else if (ch == 'i')
        return 1;
    else if (ch == 'j')
        return 1;
    else if (ch == 'k')
        return 1;
    else if (ch == 'l')
        return 1;
    else if (ch == 'm')
        return 1;
    else if (ch == 'n')
        return 1;
    else if (ch == 'o')
        return 1;
    else if (ch == 'p')
        return 1;
    else if (ch == 'q')
        return 1;
    else if (ch == 'r')
        return 1;
    else if (ch == 's')
        return 1;
    else if (ch == 't')
        return 1;
    else if (ch == 'u')
        return 1;
    else if (ch == 'v')
        return 1;
    else if (ch == 'w')
        return 1;
    else if (ch == 'x')
        return 1;
    else if (ch == 'y')
        return 1;
    else if (ch == 'z')
        return 1;
    else
        return 0;
}

void solve()
{
    int n;
    cin >> n;
    char name[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
        name[i] = tolower(name[i]);
        if (checkLetter)
            count++;
    }

    if (count == 26)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}