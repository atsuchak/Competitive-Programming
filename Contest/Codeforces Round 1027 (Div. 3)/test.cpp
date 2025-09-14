#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        // Count zeros and ones
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }
        
        // Total pairs possible
        int total_pairs = n / 2;
        
        // We want k good pairs and (total_pairs - k) bad pairs
        int bad_pairs = total_pairs - k;
        
        // For bad_pairs, we need exactly bad_pairs zeros and bad_pairs ones
        if (count0 < bad_pairs || count1 < bad_pairs) {
            cout << "NO" << endl;
            continue;
        }
        
        // After using bad_pairs zeros and ones for bad pairs
        int remaining0 = count0 - bad_pairs;
        int remaining1 = count1 - bad_pairs;
        
        // The remaining characters must form exactly k good pairs
        // Each good pair consists of 2 identical characters
        // So we need: remaining0/2 + remaining1/2 = k
        if (remaining0 / 2 + remaining1 / 2 == k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}