#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string st1, st2;
	cin >> st1 >> st2;

	transform(st1.begin(), st1.end(), st1.begin(), ::tolower);
	transform(st2.begin(), st2.end(), st2.begin(), ::tolower);

	if(st1 < st2) {
		cout << -1 << endl;
	}else if(st1 > st2) {
		cout << 1 << endl;
	}else {
		cout << 0 << endl;
	}

	// for(int i = 0; i < st1.length() && st2.length(); i++) {
	// 	if(st1[i] < st2[i]) {
	// 		cout << -1 << endl;
	// 	}else if(st1[i] > st2[i]) {
	// 		cout << 1 << endl;
	// 	}else {
	// 		cout << 0 << endl;
	// 	}
	// }

	return 0;
}