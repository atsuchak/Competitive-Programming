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

	int t; cin >> t;
	while(t--) {
		int n; cin >> n; 

		vector<char> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];

		int cntA = 0, cntB = 0;

		for(char it: a) {
			if(it == 'a') cntA++;
			else cntB++;
		}

		if(a.size() <= 2) cout << 0 << endl;
		else if(cntA <= cntB) cout << cntA - 1 << endl;
		else cout << cntB -1 << endl;
	} 

    return 0;
}