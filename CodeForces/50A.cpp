#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string st; cin >> st;

	for (int i = 0; i < st.size(); i++) {
		if (st[i] == 'W' && st[i + 1] == 'U' && st[i + 2] == 'B') {
			i += 2;
			cout << " ";
		} else {
			cout << st[i];
		}
	}


	return 0;
}