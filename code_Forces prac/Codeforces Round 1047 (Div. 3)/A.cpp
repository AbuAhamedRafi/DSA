#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        long long current = x;
        for (int i = 0; i < k; i++) {
            if (i == k - 1) {
                if ((current - 1) % 3 == 0 && (current - 1) / 3 % 2 == 1 && (current - 1) / 3 != 0) {
                    current = (current - 1) / 3;
                } else {
                    current = current * 2;
                }
            } else {
                current = current * 2;
            }
        }
        cout << current << endl;
    }
    return 0;
}