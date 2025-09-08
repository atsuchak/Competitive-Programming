#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) cin >> vec[i];

		vector<int> vec2 = vec;
		sort(vec2.begin(), vec2.end());
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (vec[i] != vec2[i]) {
				count++;
				vec.insert(vec.begin(), vec[i]);
				vec.erase(vec.begin() + i + 1);
			}
		}
		cout << count << endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}