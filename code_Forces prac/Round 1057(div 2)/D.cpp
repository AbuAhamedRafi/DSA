#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

using ll = long long;


const ll INF = 1e18;

ll cost_median(ll v1, ll v2, ll v3) {
    ll arr[] = {v1, v2, v3};
    sort(arr, arr + 3);
    ll median = arr[1];
    return abs(v1 - median) + abs(v2 - median) + abs(v3 - median);
}

ll solve_linear(const vector<ll>& arr) {
    int m = arr.size();
    if (m == 0) {
        return 0;
    }

    vector<ll> dp(m + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= m; ++i) {
        if (i >= 2 && dp[i - 2] != INF) {
            ll pair_cost = abs(arr[i - 1] - arr[i - 2]);
            dp[i] = min(dp[i], dp[i - 2] + pair_cost);
        }
        if (i >= 3 && dp[i - 3] != INF) {
            ll triple_cost = cost_median(arr[i - 1], arr[i - 2], arr[i - 3]);
            dp[i] = min(dp[i], dp[i - 3] + triple_cost);
        }
    }
    return dp[m];
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll min_cost = INF;

    min_cost = min(min_cost, solve_linear(a));

    if (n >= 2) {
        vector<ll> sub_b(a.begin() + 1, a.begin() + n - 1);
        min_cost = min(min_cost, abs(a[n - 1] - a[0]) + solve_linear(sub_b));
    }

    if (n >= 3) {
        vector<ll> sub_c(a.begin() + 1, a.begin() + n - 2);
        min_cost = min(min_cost, cost_median(a[n - 2], a[n - 1], a[0]) + solve_linear(sub_c));
    }

    if (n >= 3) {
        vector<ll> sub_d(a.begin() + 2, a.begin() + n - 1);
        min_cost = min(min_cost, cost_median(a[n - 1], a[0], a[1]) + solve_linear(sub_d));
    }

    cout << min_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}