#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = -1;
        if ((a & 1LL) == 0)
        {
            if ((b & 1LL) == 0)
            {
                ans = a * (b / 2) + 2;
            }
        }
        else
        {
            if (b & 1LL)
            {
                ans = a * b + 1;
            }
            else if ((b & 3LL) == 0)
            {
                ans = a * (b / 2) + 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
