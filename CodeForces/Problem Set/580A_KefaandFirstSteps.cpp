#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 

    vector<int> a(n);
    for(int i =0; i < n; i++) cin >> a[i];

    int count =0, maxVal = 0;

    for(int i =1; i < n; i++) {
        if(a[i] >= a[i-1]) {
            count++;
            maxVal = max(count, maxVal);
        }
        else count = 0;
    }

    cout << maxVal+1 << endl;

    return 0;
}