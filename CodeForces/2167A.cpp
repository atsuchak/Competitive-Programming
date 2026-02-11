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
  	int a, b, c, d; cin >> a >> b >> c >> d;

  	if(a == b && b == c && c == d) cout << "YES" << endl;
  	else cout << "NO" << endl;
  } 

  return 0;
}