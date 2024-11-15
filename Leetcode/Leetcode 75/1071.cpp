#include<iostream>
#include <string>
#include <numeric> 
using namespace std;

// int computeGCD(int a, int b) {
//     return b == 0 ? a : computeGCD(b, a % b);
// }

// string gcdOfStrings(string str1, string str2) {
//     if (str1 + str2 != str2 + str1) return "";
//     int gcdLen = computeGCD(str1.size(), str2.size());
//     return str1.substr(0, gcdLen);
// }

// int main() {
//     string str1 = "ABCABC";
//     string str2 = "ABC";
//     cout << "The largest common divisor string is: " << gcdOfStrings(str1, str2) << endl;
//     return 0;
// }

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";
        int gcdLen = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLen);
    }
};

int main() {
    Solution solution;
    string str1 = "ABCABC";
    string str2 = "ABC";
    cout << "The largest common divisor string is: " << solution.gcdOfStrings(str1, str2) << std::endl;
    return 0;
}