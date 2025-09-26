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

		if (x <= 1399) cout << "Division 4" << endl;
		else if (x >= 1400 && x <= 1599) cout << "Division 3" << endl;
		else if (x >= 1600 && x <= 1899) cout << "Division 2" << endl;
		else if (x >= 1900) cout << "Division 1" << endl;
	}

	return 0;
}