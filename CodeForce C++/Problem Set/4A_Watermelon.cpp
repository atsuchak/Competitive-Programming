#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;

	if(n > 2 && n % 2 == 0) {
		cout << "YES";
	}else {
		cout << "NO";
	}

	return 0;
}