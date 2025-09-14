#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int mat[5][5];
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin  >> mat[i][j];
		}
	}	

	int r, c;

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(mat[i][j] == 1) {
				r = i+1;
				c = j+1;
			}
		}
	}

	int totalMove = abs(3-r) + abs(3 - c);

	cout << totalMove << endl;

	return 0;
}