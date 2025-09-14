#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string st;
	getline(cin, st);

	int count = 0;

	for(int i = 0; i < st.length(); i++) {
		if(isdigit(st[i])) {
			count++;
		}
	}

	if(count == st.length()) {
		cout << "OWO nice !!" << endl;
	}else {
		cout << "Chi Chi" << endl;
	}

	return 0;
}