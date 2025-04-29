#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; 
	cin >> n;
	cin.ignore();

	string a[n], b[n], c[n];

	for(int i = 0; i < n; i++) {
		getline(cin, a[i]);
		getline(cin, b[i]);
		getline(cin, c[i]);	
	}

	if(n >= 10 && n <= 100) {
		for(int i = 0; i < n; i++) {
			if(a[i].length() <= 10 && b[i].length() <= 10 && c[i].length() <= 10) {
				cout << a[0] << b[0] << c[0] << endl;
			}
		}
	}

	return 0;
}