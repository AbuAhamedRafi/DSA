#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

struct FenwickMax
{
    int n;
    vector<int> bit;
    FenwickMax(int n = 0) { init(n); }
    void init(int n_)
    {
        n = n_;
        bit.assign(n + 1, 0);
    }
    void update(int idx, int val)
    {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] = max(bit[idx], val);
    }
    int query(int idx)
    {
        int r = 0;
        for (; idx > 0; idx -= idx & -idx)
            r = max(r, bit[idx]);
        return r;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1; i <= n; ++i)
            cin >> b[i];
        vector<int> L_ge(n + 1, 0);
        vector<int> st;
        st.reserve(n);
        for (int i = 1; i <= n; ++i)
        {
            while (!st.empty() && a[st.back()] < a[i])
                st.pop_back();
            L_ge[i] = st.empty() ? 0 : st.back();
            st.push_back(i);
        }
        int maxV = 2 * n + 2;
        FenwickMax fw(maxV + 5);
        auto rev = [&](int v)
        { return maxV - v + 1; };
        int64 ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            int lastBig = fw.query(rev(b[i]));
            int R = i - L_ge[i];
            long long contribStarts = 0;
            if (b[i] == a[i])
                contribStarts += R;
            if (lastBig)
            {
                int nonRecMatches = min(L_ge[i], lastBig);
                contribStarts += nonRecMatches;
            }
            ans += contribStarts * (n - i + 1LL);
            fw.update(rev(a[i]), i);
        }
        cout << ans << "\n";
    }
    return 0;
}
