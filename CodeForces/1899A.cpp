// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

typedef long long ll; typedef vector<int> vi; typedef vector<ll> vll;
typedef vector<char> vc; typedef vector<string> vs;
typedef pair<int, int> pii; typedef vector<pii> vpii;

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n;

    int cnt = 0;
    while(cnt < 10) {
        if((n+1) % 3 == 0 || (n-1) % 3 == 0) {
            cout << "First" << endl;
            return;
        }
        cnt++;
    }
    cout << "Second" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i++) solve();

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক