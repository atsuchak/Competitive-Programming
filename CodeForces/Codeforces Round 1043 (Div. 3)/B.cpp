#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;

	while (t--) {

		long long n; cin >> n;
		vector<long long> result;

		long long pw = 10;

		for (int i = 1; i <= 19; i++) {
			long long divisor = 1 + pw;

			if (divisor > n) break;

			if (n % divisor == 0) result.push_back(n / divisor);

			if (pw > n / 10) break;
			pw *= 10;
		}

		if (result.empty()) cout << "0\n";
		else {
			sort(result.begin(), result.end());

			cout << result.size() << endl;
			for (long long x : result) cout << x << " ";
			cout << endl;
		}


	}


	return 0;
}