#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int ct[4];
	int ct_count, mid;
	auto avg_ct = 0;
	int total = 0;

	for(int i = 0; i < 4; i++) {
		cin >> ct[i];
	}

	cin >> ct_count >> mid;

	sort(ct, ct+(sizeof(ct)/sizeof(ct[0])));

	switch(ct_count) {
		case 1:
			avg_ct = ct[4-1]/1.0;
			break;
		case 2:
			avg_ct = (ct[4-1] + ct[4-2])/2.0;
			break;
		case 3:
			avg_ct = (ct[4-1] + ct[4-2] + ct[4-3])/3.0;
			break;
		case 4: 
			avg_ct = (ct[4-1] + ct[4-2] + ct[4-3] + ct[4-4])/4.0;
			break;
		default:
			cout << "Invalid choose" << endl;
	}

	total = avg_ct + mid + 10;

	if(total >= 50) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}

	return 0;
}