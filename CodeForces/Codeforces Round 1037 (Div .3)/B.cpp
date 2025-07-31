#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ones;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ones.push_back(i);
        }
    }
    if (ones.empty()) {
        cout << 0 << '\n';
        return;
    }
    int median = ones[ones.size() / 2];
    long long res = 0;
    for (int i = 0; i < ones.size(); ++i) {
        res += abs(ones[i] - (median - ones.size() / 2 + i));
    }
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}