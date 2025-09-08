#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
	int n, x, y; cin >> n >> x >> y;
	// int a[n]; cin >> a[0] >> a[1] >> a[2];
	string st; cin >> st;


	if ((int)st[x] % (int)st[y] == 0 || (int)st[y] % (int)st[x] == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	cout << "Hello" << endl;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}