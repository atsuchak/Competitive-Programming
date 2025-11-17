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
  t--;
  int x, y; cin >> x >> y;

  int mx = x+y;
  while(t--) {
  	cin >> x >> y;
  	if(x+y > mx) mx = x+y;
  }

  cout << mx << endl;

  return 0;
}