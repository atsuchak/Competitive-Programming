#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    int t; cin >> t;
    char ch[n];
    for(int i = 0; i< n; i++) {
        cin >> ch[i];
    }
    char temp;
    while(t--) {
        for(int i = 0; i < n-1; i++) {
            if(ch[i] == 'B' && ch[i+1] == 'G'){
                swap(ch[i], ch[i+1]);
                i++;
            }
        }
    }
    for(int i = 0 ; i< n ; i++) {
        cout << ch[i];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}