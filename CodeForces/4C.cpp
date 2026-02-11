#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        int n;
        cin >> n;
        vector<string> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            auto it = find(vec.begin(), vec.end(), vec[i]);

            bool chk = 0;
            for(int j = 0; j < n; j++) {
                if(it != vec.end()) {
                    chk = 1;
                    break;
                }
            }
            char ch = vec[i][vec[i].size()-1];
            if(ch >= '1' && ch <= '9') {
                vec[i][vec[i].size()-1] = ch+1;
            }else {
                vec[i] += '1';
            }
        }

        for (int i = 0; i < n; i++)
            cout << vec[i] << endl;
    }

    return 0;
}