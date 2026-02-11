#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		if (x == 1 || x == 2) cout << 0 << endl;
		else if (x % 2 == 0) cout << x / 2 - 1 << endl;
		else cout << x / 2 << endl;
	}

	return 0;
}