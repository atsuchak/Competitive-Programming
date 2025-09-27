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

    string st; cin >> st;
    bool check1 = 0;
    bool check2 = 0;

    for(int i = 1; i < st.size(); i++) {
        if(st[0] == toupper(st[0]) && st[i] == toupper(st[i])) check1 = 1;
        else {
            check1 = 0;
            break;
        }
    }   

    for(int i = 1; i < st.size(); i++) {
        if(st[0] == tolower(st[0]) && st[i] == toupper(st[i])) check2 = 1;
        else {
            check2 = 0;
            break;
        }
    }   

    if(st.size() == 1) {
        st[0] = toupper(st[0]);
    }else if(check1){
        for(int i = 0; i < st.size(); i++) st[i] = tolower(st[i]); 
    }else if(check2) {
        st[0] = toupper(st[0]);
        for(int i = 1; i < st.size(); i++) st[i] = tolower(st[i]); 
    }

    cout << st << endl;

    return 0;
}