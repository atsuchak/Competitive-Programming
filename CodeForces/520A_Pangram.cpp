#include <bits/stdc++.h>
using namespace std;

void checkPangram(vector<char> &vec, int n) {

    vector<char> store(n);
    for (int i = 0; i < n; i++) store[i] = (char)tolower(vec[i]);

    sort(store.begin(), store.end());

    bool result = 0;
    for (int i = 1; i < n ; i++) {
        result = 1;
        if ((store[0] == 'a' && store[n - 1] == 'z' && n >= 26 && store[i] - store[i - 1] <= 1)) {
            result = 1;
        } else {
            result = 0;
            break;
        }
    }

    if (result) cout << "Yes" << endl;
    else cout << "No" << endl;

}

void solve() {

    int n; cin >> n;

    vector<char> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    checkPangram(vec, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}