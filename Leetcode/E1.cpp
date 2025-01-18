#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int f(const vector<int>& b) {
    int ops = 1;
    for (size_t i = 1; i < b.size(); ++i) {
        if (b[i] != b[i - 1]) {
            ops++;
        }
    }
    return ops;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_set<int> unique_values(a.begin(), a.end());

        int min_ops = f(a);

        for (int target : unique_values) {
            int ops = 0;
            for (int i = 0; i < n;) {
                if (a[i] != target) {
                    ops++;
                    while (i < n && a[i] != target) {
                        i++;
                    }
                } else {
                    i++;
                }
            }
            min_ops = min(min_ops, ops);
        }

        cout << min_ops << "\n";
    }

    return 0;
}
