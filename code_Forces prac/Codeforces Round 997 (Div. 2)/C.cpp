#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << "1 ";

        for (int i = 2; i <= n - 2; i++)
        {
            cout << i - 1 << " ";
        }

        cout << "1 2" << endl;
    }

    return 0;
}