#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (n == 1 || m == 1) {
            // If either n or m is 1, the sum of MEX values is n + m
            cout << n + m << endl;
        } else {
            // If both n > 1 and m > 1, the sum of MEX values is 2 * (n + m - 2)
            cout << 2 * (n + m - 2) << endl;
        }
    }

    return 0;
}
