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
	while(t--) {
		int a, b, c; cin >> a >> b >> c;

		int mx= max(a, b);
		mx = max(mx, c);

		if(a == mx) {
			if(b+c == a) cout << "YES" << endl;
			else cout << "NO" << endl;
		}else if(b == mx) {
			if(a+c == b) cout << "YES" << endl;
			else cout << "NO" << endl;
		}else if(c == mx) {
			if(a+b == c) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

	return 0;
}