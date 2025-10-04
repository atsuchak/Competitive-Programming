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

		bool check = 0;

		for(int it: a) 
			if(it%2 != 0) {
				check = 1;
				break;
		}

		long long sum = 0, cnt = 0;

		if(!check) cout << sum << endl;
		else {
			for(int it: a) {
				if(it%2 == 0) sum += it;
				else {
					cnt++;
					if(cnt%2 != 0) sum += it;
					else continue;
				}
			}

			cout << sum << endl;
		}
	} 

    return 0;
}