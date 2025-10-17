#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

#include <climits>

int get_msb_pos(unsigned int n)
{
    if (n == 0)
        return -1;

    return 31 - __builtin_clz(n);
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << "\n\n";
        return;
    }

    int msb_a = get_msb_pos(a);
    int msb_b = get_msb_pos(b);

    if (msb_a < msb_b)
    {
        cout << -1 << "\n";
        return;
    }

    int c = a ^ b;

    if (c <= a)
    {

        cout << 1 << "\n";
        cout << c << "\n";
    }
    else
    {
        cout << 2 << "\n";
        cout << b << " " << a << "\n";
    }
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