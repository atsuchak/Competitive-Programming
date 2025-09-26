#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >>n;
	int sum = 0;

	for(int i = 0; i < n; i++) {
		int a; cin >> a; 
		sum += a;
	}

	if(sum%4 == 0) {
		if(sum/4 >= n) cout << sum/4 << endl;
		else cout << n << endl;
	}
	else {
		cout << sum/4 << endl;
		if(sum/4 >= n) cout << (sum/4)+1 << endl;
		else cout << n << endl;
	}
}