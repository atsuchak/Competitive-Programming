#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
	int t; cin >> t;
	while (t--)  {
		int n, count = 0, a;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a == 1) count++;
		}
		cout << n - (count / 2) << endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}