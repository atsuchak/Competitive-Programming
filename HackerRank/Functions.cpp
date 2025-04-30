#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
	if(a > b && a > c && a > d) {
		return a;
	}else if(b > a && b > c && b > d) {
		return b;
	}else if(c > a && c > b && c > d) {
		return c;
	}else {
		return d;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int final = max_of_four(a, b, c, d);

	cout << final << endl;

	return 0;
}