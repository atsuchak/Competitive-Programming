#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	cin.ignore();

	string words[n];

	for(int i =0; i < n; i++) {
		getline(cin, words[i]);
	}
	
	if(n >= 1 && n <= 100) {
		for(int i = 0; i < n; i++) {
			if(words[i].length() > 10) {
				for(int j = 0; j < words[i].length()-1; j++) {
					cout << words[i][0] << words[i].length()-2 << words[i][words[i].length()-1] ;
					break;
				}
				cout << endl;
			}else {
				cout << words[i] << endl;
			}
		}
	}
	
	return 0;
}