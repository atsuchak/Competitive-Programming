#include <bits/stdc++.h>
using namespace std;

int checkSec(vector<int> &a) {
    int hi = *max_element(a.begin(), a.end());
    int lo = *min_element(a.begin(), a.end());

    int count = 0;

    int hiIndex = -1;
    int loIndex = -1;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == hi) hiIndex = i;
    }

    a.erase(a.begin() + hiIndex);

    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == lo) loIndex = i;
    }

    int hiC = hiIndex;
    int loC = a.size() - 1 - loIndex;

    cout << hiIndex << " " << loIndex << endl;

    cout << hiC << " " << loC << endl;

    count = hiC + loC;

    return count;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << checkSec(a);
    return 0;
}