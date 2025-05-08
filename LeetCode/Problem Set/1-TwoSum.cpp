#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int num[] = {1, 2, 3, 4};
    int target = 9;
    int size = sizeof(num)/sizeof(num[0]);
    bool found = false;

    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(num[i] + num[j] == target){
                cout << "[" << i << ", " << j << "]" << endl;
                found = true;
            }
            
        }
    }
    if(!found) cout << "Not found";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}