#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n; cin >> n;

	vector<string> st(n);
	for (int i = 0; i < n; i++) cin >> st[i];

	long long sum = 0;

	for (int i = 0; i < n; i++) {
		if (st[i] == "Tetrahedron") sum += 4;
		else if (st[i] == "Cube") sum += 6;
		else if (st[i] == "Octahedron") sum += 8;
		else if (st[i] == "Dodecahedron") sum += 12;
		else if (st[i] == "Icosahedron") sum += 20;
	}

	cout << sum << endl;

	return 0;
}