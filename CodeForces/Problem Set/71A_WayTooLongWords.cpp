#include <bits/stdc++.h>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first;
#define ss second;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define PI 3.1415
#define INF 1e9
#define LINF 1e18

void lowerCase(string &a, string &b) {
	transform(all(a), a.begin(), ::tolower);
	transform(all(b), b.begin(), ::tolower);
}

void sortArray(int *a, int n){
	sort(a, a+n);
}

void solve() {
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

	cout << endl;
}

int main() {
	fastIO();

	auto start = chrono::high_resolution_clock::now();

	solve();

	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
	cerr << "Execution Time: " << duration.count() << " ms" << endl;

	return 0;
}