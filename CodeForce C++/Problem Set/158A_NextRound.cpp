#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;

	int a[n];

	for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

	int count = 0;

	if(n >= 1 && k >= 1 && n <= 50 && k <= 50) {
		for (int i = 0; i < n; ++i)
		{
			if(a[i] >= a[k-1] && a[i] > 0) {
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}