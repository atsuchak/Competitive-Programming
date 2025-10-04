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
	while(n--) {
		int a, b; cin >> a >> b;

		if(b%2 == 0) cout << 0 << endl;
		else cout << a << endl;
	}

    return 0;
}