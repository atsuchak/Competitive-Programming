#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> store ;

	int n; cin >> n;

	while (n--) {
		string name; cin >> name;

		int num = 1;

		for (int i = 0; i < store.size(); i++) {
			if (store[i].find(name)) {
				string fName = name + to_string(num);
				store.push_back(fName);
				num++;
				cout << fName << endl;
			}
			else {
				store.push_back(name);
				num = 1;
				cout << "OK" << endl;
			}
		}
	}

	for (int i = 0; i < store.size(); i++) {
		cout << store[i] << endl;
	}

	return 0;
}