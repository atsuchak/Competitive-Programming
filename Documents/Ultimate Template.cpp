#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
const int INF = 1e9;
const ll LINF = 1e18;
const double PI = 3.141592653589793;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Sieve of Eratosthenes
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
    return isPrime;
}

ll modPow(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll modInverse(ll a, ll mod = MOD) {
    return modPow(a, mod - 2, mod);
}

vector<ll> factorialMod(int n, ll mod = MOD) {
    vector<ll> fact(n + 1, 1);
    for (int i = 1; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % mod;
    return fact;
}

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

void printVec(const vi &v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

void solve() {


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