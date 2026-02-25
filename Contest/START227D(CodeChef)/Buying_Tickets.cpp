// ========================================================= //
// ==       Logic works — until the judge executes       === //
// ========================================================= //

//Problem link: https://www.codechef.com/START227D/problems/BUYTICK

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << nl

typedef vector<int> vi; typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii; typedef vector<char> vc;
typedef vector<pair<int, int>> vpii;

template<typename T> istream &operator>>(istream &it, vector<T> &v) { for (auto &i : v) it >> i; return it; }
template<typename T> ostream &operator<<(ostream &it, const vector<T> &v) {
    for (int i = 0; i < v.size(); i++) it << v[i] << (i == v.size() - 1 ? "" : " "); return it << nl; }

const int MOD = 1e9 + 7; const int INF = 1e18;


void solve() {
    int n, k; cin >> n >> k;

    vi a(n); cin >> a;
    string st; cin >> st;

    vi ans;
    int cost = 0;
    for(int i = 0; i < st.size(); i++) 
        if(st[i] == '0') ans.push_back(a[i]);

    if(ans.size() < k) {cout << -1 << nl; return;}
    
    sort(all(ans));
    for(int i = 0; i < k; i++) cost += ans[i];

    cout << cost << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক