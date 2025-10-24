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
    string temp1, temp2;

    vector<char> v;
    for(char ch: c) v.push_back(ch);

    for(int i = 0; i < a.size(); i++) {
        auto it = find(v.begin(), v.end(), a[i]);
        if(it != v.end()) {
            temp1.push_back(a[i]);
            v.erase(it);
        }
    }

    for(int i = 0; i < b.size(); i++) {
        auto it = find(v.begin(), v.end(), b[i]);
        if(it != v.end()) {
            temp2.push_back(b[i]);
            v.erase(it);
        }
    }

    if(temp1 == a && temp2 == b && v.size() == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}