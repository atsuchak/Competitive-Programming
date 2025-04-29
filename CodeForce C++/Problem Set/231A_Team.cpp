#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	int a[n], b[n], c[n];

	for(int i =0; i< n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}

	int count = 0;

	for(int i =0 ; i < n; i++) {
		if(a[i], b[i], c[i] >= 1 && a[i], b[i], c[i] <= 100) {
			if(a[i] + b[i] + c[i] >= 2) {
				count++;
				// cout << a[i] + b[i] + c[i] << endl;
			}
		}
	}

	cout << count << endl;

	return 0;
}