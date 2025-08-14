#include <bits/stdc++.h>
using namespace std;

void mergeArr(vector<int> &a, vector<int> &b, int x) {
    vector<int> s;

    for (int i = 0; i < a.size(); i++) s.push_back(a[i]);
    for (int i = 0; i < b.size(); i++) s.push_back(b[i]);

    sort(s.begin(), s.end());

    bool check = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == x) check = 1;
    }
    if (check && s[0] == 1) {
        bool result = 1;
        for (int i = 0; i < s.size() - 1; i++) {
            if (!(s[i + 1] - s[i] <= 1)) {
                result = 0;
                break;
            }
        }
        if (result) cout << "I become the guy." << endl;
        else cout << "Oh, my keyboard!" << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}

// for (it = s.begin(); it != s.end(); it++) cout << *it << " ";

void solve() {

    int x; cin >> x;

    int m; cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m ; i++) cin >> a[i];

    int n; cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    mergeArr(a, b, x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}