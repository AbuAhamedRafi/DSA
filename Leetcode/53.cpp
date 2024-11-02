#include <iostream>
#include <vector>
using namespace std;
// Brute Force to print sub array
// Time Complexity O(n^3)
//  int main()
//  {
//      int n = 5;
//      int arr[5] = {1, 2, 3, 4, 5};
//      for (int st = 0; st < n; st++)
//      {
//          for (int end = st; end < n; end++)
//          {
//              for (int i = st; i <= end; i++)
//              {
//                  cout << arr[i];
//              }
//              cout << " ";
//          }
//          cout << endl;
//      }
//  }

// Brute force 2 O(n^2)
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "max subarray sum = " << maxSum<<endl;
}

// trying Kadane's Algo
// int main()
// {
//     int insertPosition(vector<int> & nums)
//         int currSum = 0, maxSum = INT_MIN;
//         for (int val : nums)
//         {
//             currSum += val;
//             maxSum = max(currSum, maxSum);
//             if (currSum < 0)
//             {
//                 currSum = 0;
//             }
//         }
//         cout << maxSum << endl;
//     return 0;
// }