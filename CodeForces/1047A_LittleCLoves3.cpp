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

  int a = 1, b = 1, c = n-2;
  if(c%3 == 0) {
    b++; 
    c--;
  }

  cout << a << " " << b << " " << c << endl;

  return 0;
}