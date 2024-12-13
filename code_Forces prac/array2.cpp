#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int tallest = INT_MIN;
        int height;
        cin >> height;
        for (int i = 0; i < N; i++)
        {
            if (height > tallest)
            {
                tallest = height;
            }
        }
        cout << tallest << endl;
    }
    return 0;
}
