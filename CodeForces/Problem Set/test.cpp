#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {

    int n;
    cin >> n; // number of elements

    vector<int> v(n); // create vector of size n

    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    // vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *(it) << " ";
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}