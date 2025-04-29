#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; 
	cin >> n;

	char st1[n], st2[n];
	for(int i =0 ; i < n; i++) {
		cin >> st1[i];
	}
	for(int i =0 ; i < n; i++) {
		cin >> st2[i];
	}

	int total1 = 0;
	int total2 = 0;

	for(int i =0 ; i< n; i++) {
		total1 += st1[i];
		cout << total1 << " ";
	}
	cout << endl;
	for(int i =0 ; i< n; i++) {
		total2 += st2[i];
		cout << total2 << " ";
	}
	cout << endl;

	cout << total1 << endl;
	cout << total2 << endl;

	if(total1 > total2) {
		cout << "Ronaldo" << endl;
	}else if(total1 < total2) {
		cout << "Messi" << endl;
	}else {
		cout << "Both" << endl;
	}

	return 0;
}