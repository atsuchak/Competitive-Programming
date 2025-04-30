#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	if(n >= 1 && n <= 9 && n == 1) {
		cout << "one";
	}else if(n >= 1 && n <= 9 && n == 2) {
		cout << "two";
	}else if(n >= 1 && n <= 9 && n == 3) {
		cout << "three";
	}else if(n >= 1 && n <= 9 && n == 4) {
		cout << "four";
	}else if(n >= 1 && n <= 9 && n == 5) {
		cout << "five";
	}else if(n >= 1 && n <= 9 && n == 6) {
		cout << "six";
	}else if(n >= 1 && n <= 9 && n == 7) {
		cout << "seven";
	}else if(n >= 1 && n <= 9 && n == 8) {
		cout << "eight";
	}else if(n >= 1 && n <= 9 && n == 9) {
		cout << "nine";
	}else if(n > 9) {
		cout << "Greater than 9";
	}

	return 0;
}