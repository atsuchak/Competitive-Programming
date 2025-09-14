#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		vector<char> fst;
		for (int i = 0; i < n; i++) {
			char temp; cin >> temp;
			fst.push_back(temp);
		}

		int x; cin >> x;

		vector<char> scnd(x);
		vector<char> thrd(x);
		for (int i = 0; i < x; i++) cin >> scnd[i];
		for (int i = 0; i < x; i++) cin >> thrd[i];

		for (int i = 0; i < x; i++) {
			if (thrd[i] == 'D') fst.push_back(scnd[i]);
			else fst.insert(fst.begin(), scnd[i]);
		}

		for (int i = 0; i < fst.size(); i++) cout << fst[i];
		cout << endl;
	}


	return 0;
}