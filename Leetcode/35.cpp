// using linear search
#include <iostream>
#include <vector>
using namespace std;
int insertPosition(vector<int> &nums,
                  int target = 0)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }

        else if (nums[i] > target)
        {
            return i;
        }
    }
    return nums.size();
}
int main(){
    vector<int>nums={1,3,5,6};
    int target =2;
    cout<<"Target Index or Insertion point: "<< insertPosition(nums,target)<<endl;
    return 0;
} 
