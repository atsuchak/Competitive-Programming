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

  int a, b, c; cin >> a >> b >> c;

  if(a > b && a > c) {
  	int mx = max(b, c);
  	int mn = min(b, c);

  	cout << (mx - mn) + (a-mx);
  
  }else if(b > a && b > c) {
  	int mx = max(a, c);
  	int mn = min(a, c);

  	cout << (mx - mn) + (b-mx);
  
  }else if(c > a && c > b) {
  	int mx = max(a, b);
  	int mn = min(a, b);

  	cout << (mx - mn) + (c-mx);
  }

  return 0;
}