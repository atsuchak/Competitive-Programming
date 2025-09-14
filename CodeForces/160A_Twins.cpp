#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void toLowerCase(string &a, string &b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
}

void removeSpaces(string &s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
}

void ignoreDuplicate(string &s) {
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
}

void sortArray(int *a, int n) {
    sort(a, a + n);
}

unordered_map<int, int> frequencyMap(const vector<int> &v) {
    unordered_map<int, int> freq;
    for (int x : v) freq[x]++;
    return freq;
}

pair<int, int> reverseAndSumDigits(int n) {
    int rev = 0, sum = 0;
    while (n > 0) {
        int d = n % 10;
        rev = rev * 10 + d;
        sum += d;
        n /= 10;
    }
    return {rev, sum};
}

int reverseDigits(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

void solve() {
    int n; cin >> n;
    int a[n];
    int half = 0;
    for(int i =0 ; i< n; i++) {
        cin >> a[i];
        half += a[i];
    }
    half = (half/2)+1;
    int count = 0;
    sortArray(a, n);
    for(int i = n-1, j = 1; i>=0; i--, j++) {
        count += a[i];
        if(count >= half) {
            cout << j;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}