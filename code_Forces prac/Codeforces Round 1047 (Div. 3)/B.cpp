#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> q(n);
        for (int i = 0; i < n; i++) {
            q[i] = n + 1 - p[i];
        }
        
        for (int i = 0; i < n; i++) {
            cout << q[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}