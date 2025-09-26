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

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];

		int mi = 0;
		int sum = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] == 0) sum++;
			if (a[i] == -1) mi++;
		}

		if (mi % 2 == 0) {
			cout << sum << endl;
		}
		else {
			sum += 2;
			cout << sum << endl;
		}

	}

	return 0;
}