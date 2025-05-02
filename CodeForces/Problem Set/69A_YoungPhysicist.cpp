#include <bits/stdc++.h>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
const int INF = 1e9;
const ll LINF = 1e18;
const double PI = 3.141592653589793;

void printVec(const vi &v) {
	for (int x : v) cout << x << " ";
	cout << endl;
}

void solve() {

	int t; cin >> t;
	int x, y, z;

	int sumX = 0, sumY = 0, sumZ = 0;


	while (t--) {
		cin >> x >> y >> z;
		sumX += x;
		sumY += y;
		sumZ += z;
	}

	if (sumX == 0 && sumY == 0 && sumZ == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}




}

int main() {
	fastIO();

	auto start = chrono::high_resolution_clock::now();

	solve();

	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
	cerr << "Execution Time: " << duration.count() << " ms" << endl;

	return 0;
}