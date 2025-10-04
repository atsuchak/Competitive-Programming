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

		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];

		int cnt = 0, negaOneCnt = 0;

		for(int it: a) {
			if(it == 0) cnt++;
			else if(it == -1) negaOneCnt++;
		}

		if(negaOneCnt%2 != 0) cnt += 2;

		cout << cnt << endl;
	} 

    return 0;
}