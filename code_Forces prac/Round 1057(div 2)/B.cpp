#include <iostream>

void solve() {
    int x, y, z;
    std::cin >> x >> y >> z;

    bool cond1 = ((x | (y & z)) == x);
    bool cond2 = ((y | (x & z)) == y);
    bool cond3 = ((z | (x & y)) == z);

    if (cond1 && cond2 && cond3) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}