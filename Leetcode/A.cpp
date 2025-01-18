#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int mex_sum = min(n, m) + abs(n - m) + 1;
        cout << mex_sum << endl;
    }

    return 0;
}
