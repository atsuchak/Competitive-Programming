#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> lights(n);
    for (int i = 0; i < n; i++) {
        cin >> lights[i];
    }
    
    int red = 0, blue = 0, undecided = 0;
    for (int i = 0; i < n; i++) {
        if (lights[i] == 1) {
            red++;
        } else if (lights[i] == 2) {
            blue++;
        } else {
            undecided++;
        }
    }
    if (n % 2 != 0) {
        cout << "No" << endl;
        return;
    }
    
    int target = n / 2;
    
    if (red > target || blue > target) {
        cout << "No" << endl;
        return;
    }
    int need_red = target - red;
    int need_blue = target - blue;
    
    if (need_red + need_blue == undecided) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}