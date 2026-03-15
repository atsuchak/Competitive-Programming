// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://codeforces.com/contest/1913/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    string st; cin >> st;

    int cnt1 = 0, cnt0 = 0;
    for(auto it : st) it == '1'? cnt1++ : cnt0++;

    int cnt = st.size();
    for(int i = 0; i < st.size(); i++) {
        if(st[i] == '0') {
            if(cnt1 > 0) cnt1--;
            else {cnt = i; break;}
        } else {
            if(cnt0 > 0) cnt0--;
            else {cnt = i; break;}
            
        } 
    }

    cout << st.size()-cnt << endl;
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