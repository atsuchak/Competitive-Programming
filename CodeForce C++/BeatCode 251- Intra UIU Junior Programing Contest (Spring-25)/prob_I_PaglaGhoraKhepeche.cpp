#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	while(T--) {
		int x, y;
		cin >> x >> y;
		if(x == 2 && y == 2) {
			cout << "0" << endl;
		}else if(x == 1 && y == 1) {
			cout << "2" << endl;
			cout << "2 " << "3" << endl;
			cout << "3 " << "2" << endl;
		}else if(x == 1 && y == 2) {
			cout << "2" << endl;
			cout << "3 " << "3" << endl;
			cout << "3 " << "1" << endl;
		}else if(x == 1 && y == 3) {
			cout << "2" << endl;
			cout << "3 " << "2" << endl;
			cout << "2 " << "1" << endl;
		}else if(x == 2 && y == 1) {
			cout << "2" << endl;
			cout << "1 " << "3" << endl;
			cout << "3 " << "3" << endl;
		}else if(x == 2 && y == 3) {
			cout << "2" << endl;
			cout << "1 " << "1" << endl;
			cout << "3 " << "1" << endl;
		}else if(x == 3 && y == 1) {
			cout << "2" << endl;
			cout << "2 " << "3" << endl;
			cout << "1 " << "2" << endl;
		}else if(x == 3 && y == 2) {
			cout << "2" << endl;
			cout << "1 " << "3" << endl;
			cout << "1 " << "1" << endl;
		}else if(x == 3 && y == 3) {
			cout << "2" << endl;
			cout << "1 " << "2" << endl;
			cout << "2 " << "1" << endl;
		}
	}

	return 0;
}