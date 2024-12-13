#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (x == a[i])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
