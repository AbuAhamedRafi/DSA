#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

string canCraftArtifact(int n, const vector<int>& a, const vector<int>& b) {
    long long total_a = accumulate(a.begin(), a.end(), 0LL);
    long long total_b = accumulate(b.begin(), b.end(), 0LL);
    
    // If total available materials are less than required materials, it’s impossible
    if (total_a < total_b) {
        return "NO";
    }

    long long surplus = 0;
    long long deficit = 0;

    // Calculate surplus and deficit
    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) {
            deficit += (b[i] - a[i]);
        } else {
            surplus += (a[i] - b[i]);
        }
    }

    // Surplus must be enough to cover the deficit
    return surplus >= deficit ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of materials
        vector<int> a(n), b(n);

        // Read the current amount of materials
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Read the required amount of materials
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        // Output the result for this test case
        cout << canCraftArtifact(n, a, b) << endl;
    }

    return 0;
}
