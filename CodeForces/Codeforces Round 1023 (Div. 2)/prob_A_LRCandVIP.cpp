#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int custom_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &num : a) {
            cin >> num;
        }
        
        bool all_same = true;
        int first = a[0];
        for (int num : a) {
            if (num != first) {
                all_same = false;
                break;
            }
        }
        if (all_same) {
            cout << "No\n";
            continue;
        }
        
        bool found = false;
        for (int i = 0; i < n; ++i) {
            vector<int> b = {a[i]};
            vector<int> c;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    c.push_back(a[j]);
                }
            }
            int gcd_b = b[0];
            for (int num : b) {
                gcd_b = custom_gcd(gcd_b, num);
            }
            int gcd_c = c[0];
            for (int num : c) {
                gcd_c = custom_gcd(gcd_c, num);
            }
            if (gcd_b != gcd_c) {
                found = true;
                cout << "Yes\n";
                for (int k = 0; k < n; ++k) {
                    if (k == i) {
                        cout << "1 ";
                    } else {
                        cout << "2 ";
                    }
                }
                cout << "\n";
                break;
            }
        }
        if (!found) {
            cout << "No\n";
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}