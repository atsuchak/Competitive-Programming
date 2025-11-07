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
  	string st; cin >> st;

  	bool chk = 0;
  	for(int i = 0; i < st.size(); i++) {
  		for(int j = st.size()-1; j >= i; j--) {
  			if(st[j] < st[i]) {
  				chk = 1;
  				break;
  			}
  		}
  	}

  	if(chk) cout << "YES" << endl;
  	else cout << "NO" << endl;
  } 

  return 0;
}