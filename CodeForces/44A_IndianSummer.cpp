#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;
	cin.ignore();

	vector<string> st(n);
	for(int i = 0; i < n; i++)
		getline(cin, st[i]);

	set<string> s;
	for(auto it: st) {
		s.insert(it);
	} 

	cout << s.size() << endl;

	return 0;
}