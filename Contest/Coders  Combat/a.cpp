#include <bits/stdc++.h>
using namespace std;

#define ff first 
#define ss second 
#define all(x) (x).begin(), (x).end()

bool isPrime(int n) {

    if(n == 2) {
        return 1;
    } else {
        for(int i = 3; i <= n/2; i++) {
            if(n%i == 0) return 0;
        }
            
    }
    return 0;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> temp;

    for(int i = 0; i < n; i++) {
        temp.push_back(abs(a[i] - b[i]));
    }

    vector<int> store;

    for(int i = 0; i < temp.size(); i++) {
        if(isPrime(temp[i])) store.push_back(temp[i]);
    }

    if(store.empty()) cout << -1 << endl;
    else cout << *min_element(all(store));

    return 0;
}