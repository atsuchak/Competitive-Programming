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

	int n; cin >> n;

	bool check = 1;
	while(n != 0) {
		if(n%10 == 1) n /= 10;
		else if(n%100 == 14) n /= 100;
		else if(n%1000 == 144) n /= 1000;
		else {
			check = 0;
			break;
		}
	}

	if(check) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}