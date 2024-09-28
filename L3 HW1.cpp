#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Sum is: " << sum << endl;
    return 0;
}