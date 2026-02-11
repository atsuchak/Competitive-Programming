#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m, a;
	cin >> n >> m >> a;

	if(n >= 1 && m >=1 && a >= 1 && n <= 10^9 && m <= 10^9 && a <= 10^9) {		
		long long totalWidth = (n+a-1)/a;
		long long totalHeigth = (m+a-1)/a;
		cout << totalWidth*totalHeigth << endl;
	}

	return 0;
}