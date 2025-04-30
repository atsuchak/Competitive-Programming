#include <bits/stdc++.h>
using namespace std;

void checkNum(int n) {
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
		if(n%2 == 0) {
			cout << "even";
		}else {
			cout << "odd";
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int a; 
	int b;
	cin >> a;
	cin >> b;

	if(a < b) {
		for(int i = a; i <= b; i++) {
			checkNum(i);
			cout << endl;
		}
	}

	return 0;
}