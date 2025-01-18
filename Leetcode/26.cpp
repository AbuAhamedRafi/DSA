#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int length = sol.removeDuplicates(nums);

    cout << "Length of array after removing duplicates: " << length << endl;
    cout << "Modified array: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
