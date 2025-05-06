#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string solve(int n, int k, vector<int>& a) {
    int total_apples = 0;
    int mx = a[0], mn = a[0];

    for (int i = 0; i < n; ++i) {
        total_apples += a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    if (mx - mn > k) {
        return "Jerry";
    }

    return (total_apples % 2 == 1) ? "Tom" : "Jerry";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        cout << solve(n, k, a) << "\n";
    }

    return 0;
}