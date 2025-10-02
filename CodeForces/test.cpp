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

    vector<string> st(n);
    for(int i = 0; i < n; i++) cin >> st[i];

        for(int i = 0; i < n; i++) {
            string store = st[i];

            int cnt = 0;

            char k = '1';

            for(int j = 0; j < n; j++) {
                if(st[j] == store) {
                    cnt++;
                }

                if(cnt == 2) {
                    st[j] = st[j] + k;
                    k++;
                    cnt = 0;
                }
            } 

        }

        for(int i = 0; i < n; i++) {
            if(st[i].find('1'))  cout << st[i] << endl;
            else cout << "OK" << endl;
        }

        return 0;
    }