// #include <iostream>
// #include <vector>
// using namespace std;

// const int MOD = 998244353;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);

//     for (int &x : a)
//     {
//         cin >> x;
//     }

//     vector<int> dp_honest(n + 1, 0);
//     vector<int> dp_liar(n + 1, 0);

//     dp_honest[0] = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         vector<int> dp_honest_new(n + 1, 0);
//         vector<int> dp_liar_new(n + 1, 0);

//         for (int j = 0; j <= i; j++)
//         {

//             if (j == a[i - 1])
//             {
//                 dp_honest_new[j] = (dp_honest[j] + dp_liar[j]) % MOD;
//             }

//             if (j > 0)
//             {
//                 dp_liar_new[j] = (dp_liar_new[j] + dp_honest[j - 1]) % MOD;
//             }
//         }

//         dp_honest = dp_honest_new;
//         dp_liar = dp_liar_new;
//     }

//     int result = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         result = (result + dp_honest[i] + dp_liar[i]) % MOD;
//     }

//     cout << result << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }

    vector<int> dp_honest(n + 1, 0), dp_liar(n + 1, 0);
    dp_honest[0] = 1; 

    for (int i = 1; i <= n; i++)
    {
        vector<int> dp_honest_new(n + 1, 0), dp_liar_new(n + 1, 0);
        vector<int> prefix_honest(n + 1, 0); // Prefix sum for dp_honest

        // Build prefix sums for dp_honest
        for (int j = 0; j <= n; j++)
        {
            prefix_honest[j] = dp_honest[j];
            if (j > 0)
                prefix_honest[j] = (prefix_honest[j] + prefix_honest[j - 1]) % MOD;
        }

        for (int j = 0; j <= i; j++)
        {
            // Honest transition: j must equal a[i - 1]
            if (j == a[i - 1])
            {
                dp_honest_new[j] = (dp_honest[j] + dp_liar[j]) % MOD;
            }

            // Liar transition: add sums up to j - 1 from dp_honest
            if (j > 0)
            {
                dp_liar_new[j] = prefix_honest[j - 1];
            }
        }

        dp_honest = dp_honest_new;
        dp_liar = dp_liar_new;
    }

    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result = (result + dp_honest[i] + dp_liar[i]) % MOD;
    }

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
