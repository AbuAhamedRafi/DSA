#include <iostream>
#include <set>

void solve()
{
    int n;
    std::cin >> n;

    std::set<int> unique_beauties;

    for (int i = 0; i < n; ++i)
    {
        int beauty;
        std::cin >> beauty;

        unique_beauties.insert(beauty);
    }

    std::cout << unique_beauties.size() << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}