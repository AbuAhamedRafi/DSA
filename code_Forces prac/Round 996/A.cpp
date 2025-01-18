#include <iostream>
#include <vector>
using namespace std;

string canAliceWin(int a, int b) {
    if (abs(a - b) % 2 == 1) {
        return "NO"; 
    } else {
        return "YES"; 
    }
}

int main() {
    int t; 
    cin >> t;

    vector<string> results;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        results.push_back(canAliceWin(a, b));
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
