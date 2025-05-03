#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    int arr[13] = {4, 7, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool isTrue = false;
    for(int i = 0; i < 13; i++) {
        if(n%arr[i] == 0) {
            isTrue = true;
            break;
        }
    }
    cout << (isTrue? "YES": "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}