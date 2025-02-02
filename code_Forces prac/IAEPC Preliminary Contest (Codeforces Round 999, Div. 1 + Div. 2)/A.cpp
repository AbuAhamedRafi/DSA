// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> maximizePoints(vector<pair<int, vector<int>>> &testCases)
// {
//     vector<int> results;

//     for (auto &caseData : testCases)
//     {
//         vector<int> arr = caseData.second;

//         vector<int> even, odd;

//         for (int num : arr)
//         {
//             if (num % 2 == 0)
//             {
//                 even.push_back(num);
//             }
//             else
//             {
//                 odd.push_back(num);
//             }
//         }

//         vector<int> rearranged;
//         rearranged.insert(rearranged.end(), even.begin(), even.end());
//         rearranged.insert(rearranged.end(), odd.begin(), odd.end());

//         int points = 0;
//         int s = 0;

//         for (int num : rearranged)
//         {
//             s += num;
//             if (s % 2 == 0)
//             {
//                 points++;

//                 while (s % 2 == 0)
//                 {
//                     s /= 2;
//                 }
//             }
//         }

//         results.push_back(points);
//     }

//     return results;
// }

// int main()
// {

//     int t;
//     cin >> t;

//     vector<pair<int, vector<int>>> testCases;

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[j];
//         }

//         testCases.push_back({n, arr});
//     }

//     vector<int> results = maximizePoints(testCases);

//     for (int result : results)
//     {
//         cout << result << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximizePoints(vector<pair<int, vector<int>>> &testCases)
{
    vector<int> results;

    for (auto &caseData : testCases)
    {
        vector<int> arr = caseData.second;

        sort(arr.rbegin(), arr.rend());

        int points = 0;
        long long s = 0;

        for (int num : arr)
        {
            s += num;
            if (s % 2 == 0)
            {
                points++;
            }
        }

        results.push_back(points);
    }

    return results;
}

int main()
{
    int t;
    cin >> t;

    vector<pair<int, vector<int>>> testCases;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        testCases.push_back({n, arr});
    }

    vector<int> results = maximizePoints(testCases);

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
