#include <bits/stdc++.h>
using namespace std;

char check(char a) {
	if(a == 'a') {
		return 91;
	}else if(a == 'b') {
		return 92;
	}else if(a == 'c') {
		return 93;
	}else if(a == 'd') {
		return 94;
	}else if(a == 'e') {
		return 95;
	}else if(a == 'f') {
		return 96;
	}else if(a == 'g') {
		return 97;
	}else if(a == 'h') {
		return 98;
	}else if(a == 'i') {
		return 99;
	}else if(a == 'j') {
		return 100;
	}else if(a == 'k') {
		return 101;
	}else if(a == 'l') {
		return 102;
	}else if(a == 'm') {
		return 103;
	}else if(a == 'n') {
		return 104;
	}else if(a == 'o') {
		return 105;
	}else if(a == 'p') {
		return 106;
	}else if(a == 'q') {
		return 107;
	}else if(a == 'r') {
		return 108;
	}else if(a == 's') {
		return 109;
	}else if(a == 't') {
		return 110;
	}else if(a == 'u') {
		return 111;
	}else if(a == 'v') {
		return 112;
	}else if(a == 'w') {
		return 113;
	}else if(a == 'x') {
		return 114;
	}else if(a == 'y') {
		return 115;
	}else if(a == 'z') {
		return 116;
	}else if(a == 'A') {
		return 65;
	}else if(a == 'B') {
		return 66;
	}else if(a == 'C') {
		return 67;
	}else if(a == 'D') {
		return 68;
	}else if(a == 'E') {
		return 69;
	}else if(a == 'F') {
		return 70;
	}else if(a == 'G') {
		return 71;
	}else if(a == 'H') {
		return 72;
	}else if(a == 'I') {
		return 73;
	}else if(a == 'J') {
		return 74;
	}else if(a == 'K') {
		return 75;
	}else if(a == 'L') {
		return 76;
	}else if(a == 'M') {
		return 77;
	}else if(a == 'N') {
		return 78;
	}else if(a == 'O') {
		return 79;
	}else if(a == 'P') {
		return 80;
	}else if(a == 'Q') {
		return 81;
	}else if(a == 'R') {
		return 82;
	}else if(a == 'S') {
		return 83;
	}else if(a == 'T') {
		return 84;
	}else if(a == 'U') {
		return 85;
	}else if(a == 'V') {
		return 86;
	}else if(a == 'W') {
		return 87;
	}else if(a == 'X') {
		return 88;
	}else if(a == 'Y') {
		return 89;
	}else if(a == 'Z') {
		return 90;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n; 
	cin >> n;
	cin.ignore();

	char st1[n], st2[n];
	for(int i =0 ; i < n; i++) {
		cin >> st1[i];
	}
	for(int i =0 ; i < n; i++) {
		cin >> st2[i];
	}

	char store1[n];
	char store2[n];
	int total1 = 0;
	int total2 = 0;

	for(int i =0 ; i< n; i++) {
		store1[i] = check(st1[i]);
		total1 += store1[i];
	}
	for(int i =0 ; i< n; i++) {
		store2[i] = check(st2[i]);
		total2 += store2[i];
	}

	if(total1 > total2) {
		cout << "Messi" << endl;
	}else if(total1 < total2) {
		cout << "Ronaldo" << endl;
	}else {
		cout << "Both" << endl;
	}

	return 0;
}