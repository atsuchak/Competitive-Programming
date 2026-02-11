#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int cOdd = 0, cEven = 0;

	for (int it : a) {
		if (it % 2 == 0) cEven++;
		else cOdd++;
	}

	if (cEven > cOdd) {
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 != 0) {
				cout << i + 1 << endl;
				break;
			}
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0) {
				cout << i + 1 << endl;
				break;
			}
		}
	}

	return 0;
}