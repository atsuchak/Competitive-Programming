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

	int x = sizeof(a)/ sizeof(a[0]);

	cout << "Initial Array: " << endl;
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Reverse Array: " << endl;
	for(int i = n-1; i >= 0 ; i--) {
		cout << a[i] << " ";
	}
	cout << endl;

	sort(a, a+n);

	cout << "Sorted Initial Array: " << endl;
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Sorted Reverse Array: " << endl;
	for(int i = n-1; i >= 0 ; i--) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}