#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	cin.ignore();

	string val[n];

	int x = 0;

	for(int i = 0; i < n; i++) {
	    getline(cin, val[i]);
	}

	for(int i = 0; i < n; i++) {
		if(val[i] == "X++" || val[i] == "++X")
		{
			x++;
		}else if(val[i] == "X--" || val[i] == "--X") {
			x--;
		}
	}
	cout << x << endl;

	return 0;
}