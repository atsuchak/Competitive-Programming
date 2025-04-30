#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string st;
	cin >> st;

	string digit = "";

	for(char c: st) {
		if(isdigit(c)) {
			digit += c;
		}
	}

	sort(digit.begin(), digit.end());

	for(int i = 0; i < digit.length(); i++) {
		cout << digit[i];
		if(i != digit.length()-1) {
			cout << "+";
		}
	}	
	
	cout << endl;

	return 0;
}