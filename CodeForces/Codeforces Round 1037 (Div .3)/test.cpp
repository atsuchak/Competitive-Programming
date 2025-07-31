#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> dp(n, 0); // dp[i] = max hikes starting at day i
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) { // good weather
                dp[i] = 1;
                for (int j = i + k; j < n; j++) {
                    if (a[j] == 0) {
                        dp[i] = max(dp[i], dp[j] + 1);
                    }
                }
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}