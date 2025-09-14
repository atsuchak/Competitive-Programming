#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;

	while (t--) {
		int x, n; cin >> x >> n;

		if (n % 2 == 0) cout << 0 << endl;
		else cout << x << endl;
	}

	return 0;
}