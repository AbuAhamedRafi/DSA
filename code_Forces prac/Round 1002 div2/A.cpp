#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        unordered_set<int> sums;
        for (int ai : a) {
            for (int bj : b) {
                sums.insert(ai + bj);
            }
        }
        cout << (sums.size() >= 3 ? "YES" : "NO") << "\n";
    }
    return 0;
}