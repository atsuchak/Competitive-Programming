// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://codeforces.com/problemset/problem/155/A

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

    vi a(n);
    for(auto &it: a) cin >> it;

    int mn = a[0], mx = a[0];
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > mx) mx =  a[i], cnt++;
        else if(a[i] < mn) mn = a[i], cnt++;
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;

    for(int i = 0; i < t; i++) solve();

    return 0;
} 