#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("D:/Sublime file/input.txt", "r", stdin);
  freopen("D:/Sublime file/output.txt", "w", stdout);

  int t; cin >> t;
  while(t--) {
  	long long n, k; cin >> n >> k;

  	int i, temp = k;
  	for(i = 1; k <= n; i++) 
  		k = temp * i;

  	i += (n-k);
  	cout << i << endl;
  } 

  return 0;
}