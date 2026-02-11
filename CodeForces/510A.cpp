#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n, x; cin >> n >> x;

	for (int i = 1; i <= n; i++) {
		// cout << "i: " << i << endl;
		if (i % 2 != 0) {
			for (int j = 0; j < x; j++) cout << "#";
		} else if (i % 2 == 0 && i % 4 == 0) {
			for (int j = 0; j < x; j++) {
				if (j == 0) cout << "#";
				else cout << ".";
			}
		} else {
			for (int j = 0; j < x; j++) {
				if (j == x - 1) cout << "#";
				else cout << ".";
			}
		}
		cout << endl;
	}

	return 0;
}