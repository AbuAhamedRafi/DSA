#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static vector<int> transform_once(const vector<int>& a) {
    int n = (int)a.size();
    vector<int> freq(n + 2, 0);
    for (int x : a) if (x <= n + 1) ++freq[x];
    int M = 0;
    while (freq[M] > 0) ++M;
    vector<int> res(n);
    for (int i = 0; i < n; ++i) {
        if (a[i] < M && freq[a[i]] == 1) res[i] = a[i]; else res[i] = M;
    }
    return res;
}

static inline long long sum_vec(const vector<int>& a) {
    long long s = 0; for (int x : a) s += x; return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; long long k; cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        if (k == 0) { cout << sum_vec(a) << '\n'; continue; }
        auto a1 = transform_once(a);
        if (k == 1) { cout << sum_vec(a1) << '\n'; continue; }
        auto a2 = transform_once(a1);
        if (a1 == a2) {
            cout << sum_vec(a1) << '\n';
        } else {
            cout << ( (k & 1LL) ? sum_vec(a1) : sum_vec(a2) ) << '\n';
        }
    }
    return 0;
}