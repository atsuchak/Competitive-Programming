#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

	int cnt = 0;

	for (int i = 1; i <= d; i++)
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) cnt++;

	cout << cnt << endl;

	return 0;
}