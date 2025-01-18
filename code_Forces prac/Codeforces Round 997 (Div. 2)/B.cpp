#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> g(n);

        for (int i = 0; i < n; i++)
        {
            cin >> g[i];
        }

        vector<int> perm(n);
        for (int i = 0; i < n; i++)
        {
            perm[i] = i;
        }

        sort(perm.begin(), perm.end(), [&](int u, int v)
             {

            if (u < v) {
                return g[u][v] == '1';
            }

            return g[v][u] == '0'; });

        for (int i = 0; i < n; i++)
        {
            cout << perm[i] + 1;

            if (i + 1 != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
