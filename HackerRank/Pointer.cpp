#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b) {
	int tempA = *a;
	int tempB = *b;
	*a = tempA + tempB;
	*b = abs(tempA - tempB);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int a, b;
	cin >> a >> b;

	update(&a, &b);

	cout << a << endl;
	cout << b << endl;

	return 0;
}