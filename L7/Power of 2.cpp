#include <iostream>
using namespace std;
int isPowOf2(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (isPowOf2(n))
    {
        cout << n << " is a Power of 2";
    }
    else
    {
        cout << n << " Not a power of 2";
    }

    return 0;
}