#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e7;

int m, n;
int grid[100][100];
long long memo[1000];
long long memo1[1000][1000];

long long staircase(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (memo[n] != -1) return memo[n];    
    return memo[n] = staircase(n-1) + staircase(n-2) + staircase(n-3);
}

int notes[5] = {1, 5, 10, 20, 50};
int taken[1000];
int coinChange (int n) {
    if (n == 0) return 0;
    if (n < 0) return INT32_MAX;
    if (memo[n] != -1) return memo[n];

    int minimum = INT32_MAX;
    for (int note: notes) {
        int temp = coinChange(n - note);
        if (temp < minimum) {
            minimum = temp;
            taken[n] = note;
        }
    }
    return memo[n] = minimum + 1;
}

int house[1000];
int heist(int i) {
    if (i >= n) return 0;  // No more houses remaining
    if (memo[i] != -1) return memo[i];
    return  memo[i] = max(house[i] + heist(i+2), heist(i+1));
}

long long flags(int n) {
    if (n <= 2) return 1;
    if (memo[n] != -1) return memo[n];
    return memo[n] = flags(n-1) + flags(n-2);
}

int maxPath(int r, int c) {
    if(r == m-1 && c == n-1) return grid[r][c];
    if(r == m || c == n) return 0;
    if(memo1[r][c] != -1) return memo1[r][c];
    return memo1[r][c] = grid[r][c] + max(maxPath(r, c+1), maxPath(r+1, c));
}

long long tile2xN(int n) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n];
    return memo[n] = (tile2xN(n - 1) + tile2xN(n - 2)) % MOD;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    memset(memo, -1, sizeof(memo));

    return 0;
}