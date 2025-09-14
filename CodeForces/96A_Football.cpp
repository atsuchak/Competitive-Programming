#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {

    string st;
    cin >> st;

    int countZero = 0, countOne = 0;
    int count = 1;
    for(int i = 1; i <= st.size()-1; i++) {
        if(st[i] == st[i-1]) {
            count++;
            if(count >= 7) {
                cout << "YES" << endl;
                break;
            }
        }else {
            count = 1;
        }
    }
    if(count < 7) cout << "NO" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}