


    #include <bits/stdc++.h>
using namespace std;

#define ff first 
#define ss second 
#define all(x) (x).begin(), (x).end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if(n == 2) {
        cout << "prime";
    } else {
        for(int i = 3; i <= n/2; i++) {
            if(n%i == 0) {
                cout << "prime";
                break;
            }
        }
            
    }

    return 0;
}