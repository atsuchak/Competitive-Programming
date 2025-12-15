#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n) {
    if(n < 2) return 0;
    for(long long i = 2; i*i <= n; i++)
        if(n%i == 0) return 0;

    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while(t_case--) {
        long long a, b; cin >> a >> b;

        long long cnt = 0;
        for(long long i = a; i <= b; i++) {
            if(i == 2 || i == 3) cnt++;
            else if(i > 29 && (i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0 || i%11 == 0
                || i%13 == 0 || i%17 == 0 || i%19 == 0 || i%23 == 0 || i%27 == 0 || i%29 == 0)) continue;
            else if(is_prime(i)) cnt++;
        }
        
        cout << cnt << endl;
    }

    return 0;
}