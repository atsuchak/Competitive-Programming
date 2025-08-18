#include <bits/stdc++.h>
using namespace std;


int main() {

	long long n; cin >> n;

	long long store = 0;

	while (n != 0) {
		if (n >= 100) {
			store += n / 100;
			n = n % 100;
		} else if (n >= 20) {
			store += n / 20;
			n = n % 20;
		} else if (n >= 10) {
			store += n / 10;
			n = n % 10;
		} else if (n >= 5) {
			store += n / 5;
			n = n % 5;
		} else {
			store += n;
			n = 0;
		}

		// cout << n << " " << store << endl ;
	}

	cout << store << endl;


	return 0;
}