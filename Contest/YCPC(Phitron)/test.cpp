#include <iostream>
#include <vector>
using namespace std;

int minOperationsToSort(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return 0;

    vector<pair<int, int>> groups; // {value, count}
    int current = arr[0];
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == current) {
            count++;
        } else {
            groups.emplace_back(current, count);
            current = arr[i];
            count = 1;
        }
    }
    groups.emplace_back(current, count);

    int operations = 0;
    bool seen_one = false;
    for (const auto& group : groups) {
        if (group.first == 1) {
            seen_one = true;
        } else if (seen_one) {
            operations++;
            seen_one = false;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> arr(m);
        for (int i = 0; i < m; ++i) {
            cin >> arr[i];
        }
        cout << minOperationsToSort(arr) << endl;
    }
    return 0;
}