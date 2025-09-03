#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

	vector<pair<int, int>> x;

	while (n--) {
		int a, b; cin >> a >> b;
		x.push_back({a, b});
	}

	int cnt = 0;

	for (int i = 0; i < x.size(); i++) {
		for (int j = 0; j < x.size(); j++) {
			if (x[i].first == x[j].second) cnt++;
		}
	}

	cout << cnt << endl;

	// for (auto it : x) cout << it.first << " " << it.second << endl;

	return 0;
}