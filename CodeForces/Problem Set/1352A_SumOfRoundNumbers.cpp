#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    
    vector<int> store;

    vector<int> vec = {10, 100, 1000, 10000, 100000};

    for(auto &it:vec) {
        if(n%it != 0) {
            store.push_back(n%it);
            n -= (n%it);
            
        }
    }

    cout << store.size() << endl;
    for(auto &it: store) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}