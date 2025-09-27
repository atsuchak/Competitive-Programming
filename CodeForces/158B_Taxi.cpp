#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int cOne = 0, cTwo = 0, cThree = 0, cFour = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) cOne++;
        else if(a[i] == 2) cTwo++;
        else if(a[i] == 3) cThree++;
        else cFour++;
    }

    int sum = cFour;

    sum += cThree; 

    cOne = cOne - cThree;

    if(cTwo%2 == 0) sum += cTwo/2;
    else sum += cTwo/2 + 1;

    if(cTwo %2 != 0) cOne -= 2;

    if(cOne > 0 && cOne %4 == 0) sum += cOne/4;
    else if(cOne > 0 && cOne %4 != 0)sum += cOne/4 + 1;

    cout << sum << endl;
   
    return 0;
}