// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://codeforces.com/contest/78/problem/A 

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
    string a, b, c;

    getline(cin, a); 
    getline(cin, b); 
    getline(cin, c);

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(auto it : a) if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u') cnt1++;
    
    for(auto it : b) if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u') cnt2++;
    
    for(auto it : c) if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u') cnt3++;
    
    (cnt1 == 5 && cnt2 == 7 && cnt3 == 5)? cout << "YES" << endl : cout << "NO" << endl;
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

// coded by আহনাফ তাজওয়ার সুচক