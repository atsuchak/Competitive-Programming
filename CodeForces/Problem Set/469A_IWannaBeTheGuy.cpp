#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void mergeArr(vector<int> &a, vector<int> &b, int x) {
	set<int> s;
	set<int>::iterator it, temp;

	for (int i = 0; i < a.size(); i++) s.insert(a[i]);
	for (int i = 0; i < b.size(); i++) s.insert(b[i]);

	temp = s.begin();

	bool check = 0;
	bool result = 1;

	for (it = s.begin(); it != s.end(); it++) {
		if (*it == x) check = 1;
	}

	if (check && *temp == 1) {
		int prev = *temp;
		temp++;

		for ( ; temp != s.end(); temp++) {
			if (*temp != prev + 1) {
				result = 0;
				break;
			}
			prev = *temp;
		}
		if (result) cout << "I become the guy." << endl;
		else cout << "Oh, my keyboard!" << endl;
	} else {
		cout << "Oh, my keyboard!" << endl;
	}

}

void solve() {

	int x; cin >> x;

	int m; cin >> m;
	vector<int> a(m);
	for (int i = 0; i < m ; i++) cin >> a[i];

	int n; cin >> n;
	vector<int> b(n);
	for (int i = 0; i < n; i++) cin >> b[i];

	mergeArr(a, b, x);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;
}