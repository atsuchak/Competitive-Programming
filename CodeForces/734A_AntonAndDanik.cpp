#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int t; cin >> t;
    string name;
    cin >> name;
    int antonCount = 0, danikCount = 0;
    for(int i =0 ; i < t; i++) {
        if(name[i] == 'A') antonCount++;
        else danikCount++;
    }

    if(antonCount > danikCount) cout << "Anton";
    else if(antonCount < danikCount) cout << "Danik";
    else cout << "Friendship";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}