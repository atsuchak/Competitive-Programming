#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<char> a; 

    char ch = '{';

    while(ch != '}') {
        cin >> ch; 
        a.push_back(ch);
    }

    
    // for(int i =0; i < a.size(); i++) cout << a[i] << " ";
    // cout << endl;

    for(int i = 0; i < a.size();i++) {
        if(a[i] >= 'a' && a[i] <= 'z') a[i] = tolower(a[i]);
    }

    // for(int i =0; i < a.size(); i++) cout << a[i] << " ";
    // cout << endl;


    set<char> st;
    for(int i =0; i < a.size(); i++) {
        if(a[i] >= 'a' && a[i] <= 'z') st.insert(a[i]);
    }

    // for(auto it: st) cout << it << " ";
    // cout << endl;

    cout << st.size() << endl;

    return 0;
}