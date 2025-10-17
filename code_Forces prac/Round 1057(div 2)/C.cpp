#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<long long, int> counts;
    for (int i = 0; i < n; ++i)
    {
        long long a;
        cin >> a;
        counts[a]++;
    }

    vector<long long> pairs;
    vector<long long> singles;

    for (auto const &[len, count] : counts)
    {
        for (int i = 0; i < count / 2; ++i)
        {
            pairs.push_back(len);
        }
        if (count % 2 == 1)
        {
            singles.push_back(len);
        }
    }
    long long s_pairs = 0;
    for (long long p : pairs)
    {
        s_pairs += p;
    }

    long long max_pair = -1;
    if (!pairs.empty())
    {
        max_pair = pairs.back();
    }

    long long max_perimeter = 0;

    if (pairs.size() >= 2)
    {
        long long p = 2 * s_pairs;
        max_perimeter = max(max_perimeter, p);
    }

    if (!singles.empty() && !pairs.empty())
    {
        for (int i = singles.size() - 1; i >= 0; --i)
        {
            long long s = singles[i];
            long long p = s + 2 * s_pairs;
            long long l_max = std::max(s, max_pair);
            if (p > 2 * l_max)
            {
                max_perimeter = max(max_perimeter, p);
                break;
            }
        }
    }

    if (singles.size() >= 2)
    {
        for (int i = singles.size() - 1; i >= 1; --i)
        {
            long long s_i = singles[i];
            long long s_j = singles[i - 1];

            long long p = s_i + s_j + 2 * s_pairs;
            long long l_max = std::max(s_i, max_pair);

            if (p > 2 * l_max)
            {
                max_perimeter = max(max_perimeter, p);
                break;
            }
        }
    }

    cout << max_perimeter << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}