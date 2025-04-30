#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// int x = sizeof(a) / sizeof(a[0]);

	// sort(a, a + x);

	for(int i = n-1; i >= 0 ; i--) {
		cout << a[i] << " ";
	}

	return 0;
}