#include <bits/stdc++.h>
using namespace std;

#define ff first 
#define ss second 
#define all(x) (x).begin(), (x).end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st1; cin >> st1;
    string st2; cin >> st2;

    for(int i = 0; i < st1.size(); i++) st1[i] = tolower(st1[i]);
    for(int i = 0; i < st2.size(); i++) st2[i] = tolower(st2[i]);

    // sort(st1.rbegin(), st1.rend());
    // sort(st2.rbegin(), st2.rend());

    reverse(st1.begin(), st1.end());
    reverse(st2.begin(), st2.end());
    
    bool cA = 0, cB = 0;
    // int cA = 0, cB = 0;

    for(int i = 0; i < st1.size(); i++) {
        if(st1[i] > st2[i]) {
            cout << 1 << endl;
            cA = 1;
            break;
            // cA++;
        }else if(st1[i] < st2[i]) {
            cout << -1 << endl;
            cB = 1;
            break;
            // cB++;
        }
    }

    if(!cA && !cB) cout << 0 << endl;

    // if(cA) cout << 1 << endl;
    // else if(cB) cout << -1 << endl;
    // else cout << 0;

    return 0;
}