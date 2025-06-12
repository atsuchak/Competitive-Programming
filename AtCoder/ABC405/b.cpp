#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> count(m + 1, 0); // count of numbers 1 to M
    int present = 0;

    // Build frequency map for current array
    for (int x : a) {
        if (x >= 1 && x <= m) {
            if (count[x] == 0) present++;
            count[x]++;
        }
    }

    if (present < m) {
        cout << 0 << "\n";
        return;
    }

    int removals = 0;
    for (int i = n - 1; i >= 0; --i) {
        int x = a[i];
        if (x >= 1 && x <= m) {
            count[x]--;
            if (count[x] == 0) {
                present--;
            }
        }
        removals++;
        if (present < m) {
            cout << removals << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
