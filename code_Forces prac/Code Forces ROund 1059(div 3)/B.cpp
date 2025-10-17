#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool is_palindrome(const std::string &s)
{
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}

bool is_non_decreasing(const std::string &s)
{
    bool found_one = false;
    for (char c : s)
    {
        if (c == '1')
        {
            found_one = true;
        }
        else if (c == '0' && found_one)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    for (int mask = 0; mask < (1 << n); ++mask)
    {
        std::string p_str;
        std::string x_str;

        for (int i = 0; i < n; ++i)
        {
            if ((mask >> i) & 1)
            {
                p_str += s[i];
            }
            else
            {
                x_str += s[i];
            }
        }

        if (is_non_decreasing(p_str) && is_palindrome(x_str))
        {

            int k = p_str.length();
            std::cout << k << "\n";

            if (k > 0)
            {
                bool first = true;
                for (int i = 0; i < n; ++i)
                {
                    if ((mask >> i) & 1)
                    {
                        if (!first)
                        {
                            std::cout << " ";
                        }
                        std::cout << i + 1;
                        first = false;
                    }
                }
            }
            std::cout << "\n";
            return;
        }
    }

    std::cout << -1 << "\n";
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