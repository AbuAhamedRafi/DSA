#include <iostream>
#include <vector>

void solve()
{

    int n;
    std::cin >> n;

    int max_value;
    std::cin >> max_value;

    for (int i = 1; i < n; ++i)
    {
        int current_element;
        std::cin >> current_element;

        if (current_element > max_value)
        {
            max_value = current_element;
        }
    }

    std::cout << max_value << std::endl;
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