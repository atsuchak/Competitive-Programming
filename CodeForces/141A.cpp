#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    string a, b, c; cin >> a >> b >> c;

    a += b;
    sort(a.begin(), a.end());

    sort(c.begin(), c.end());

    bool check = 0;
    for(int i = 0; i < c.size() || i < a.size(); i++) 
        if(a[i] != c[i]) check = 1;

    if(check) cout << "NO" << endl;
    else cout << "YES" << endl;
    

    return 0;
}