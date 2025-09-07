// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//         cin >> nums[i];

//     for (int i = 0; i < n; i++)
//         cout << nums[i] << " ";
//     for (int i = 0; i < n; i++)
//         cout << nums[i] << " ";

//     return 0;
// }


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; ++i) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};