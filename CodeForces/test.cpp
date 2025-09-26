#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());

    // for(int it: a) cout << it << " ";
    //     cout << endl;

    int cOne = 0, cTwo = 0, cThree = 0, cFour = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) cOne++;
        else if(a[i] == 2) cTwo++;
        else if(a[i] == 3) cThree++;
        if(a[i] == 4) cFour++;
    }

    int sum = cFour;
    if(cOne >= cThree) {
        cOne = cOne - cThree;
        sum += cThree;
    }else {
        cOne = cOne - cThree;
        sum += cThree;
    }
    sum += cTwo/2;

    if(cTwo%2 != 0 && cOne >= 3) sum += 2;
    else if(cTwo%2 != 0 && cOne < 3) sum += 1;
    else if(cTwo%2 == 0 && cOne >= 1) {
        if(cOne%4 == 0) sum += cOne/4;
        else sum += (cOne/4)+1;
    }

    cout << sum << endl;
   
    return 0;
}