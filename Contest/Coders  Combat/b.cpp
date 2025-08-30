#include <bits/stdc++.h>
using namespace std;

#define ff first 
#define ss second 
#define all(x) (x).begin(), (x).end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());

    set<int> st;
    for(int i = 0; i < n; i++) st.insert(a[i]);

    vector<int> temp;
    for(auto it: st) temp.push_back(it);

    sort(temp.rbegin(), temp.rend());
    int max = temp[k-1];

    sort(a.rbegin(), a.rend());


    if(k > temp.size()) cout << n << endl;
    else {
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > max) count++; 
        }
        cout << count;
    }

    return 0;
}