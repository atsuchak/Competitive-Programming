#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    string st; cin >> st;
    int sum = 0;
    sort(st.begin(), st.end());
    for(int i = 0; i < st.size(); i++) {
        sum += st[i];
    }

    int leftChar = 26-st.size();
    int total = 2847 - sum;
    cout << char(total);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}


//                      Today is not my day
//                      Thats it for today