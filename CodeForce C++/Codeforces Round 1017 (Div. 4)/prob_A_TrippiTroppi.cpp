#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; 
	cin >> n;
	cin.ignore();

	if(n >= 1 && n <= 100) {
		string st[n];
		for (int i = 0; i < n; i++){
			getline(cin, st[i]);
		}

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < st[i].length(); j++) {
				if(j == 0 || st[i][j-1] == ' ') {

					cout << st[i][j];
				}
			}
			cout << endl;
		}
	}

	return 0;
}