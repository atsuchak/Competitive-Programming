#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;  // cin >> t_case;

    while (t_case--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int pos_val = 0, neg_val = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > 0)
                pos_val += a[i];
            else {
                if (pos_val < 1)
                    neg_val++;
                else
                    pos_val--;
            }
        }
        cout << neg_val << endl;
    }

    return 0;
}