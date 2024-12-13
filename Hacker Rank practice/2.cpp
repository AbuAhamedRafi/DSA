#include <iostream>
using namespace std;

int main()
{
    int a[3];
    int b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            alice++;
        }
        else if (a[i] < b[i])
        {
            bob++;
        }
    }
    cout << "Alice's score: " << alice << endl;
    cout << "Bob's score: " << bob << endl;
    return 0;
}