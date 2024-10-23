#include <iostream>
using namespace std;
int digitSum(int num)
{
    int digSum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }
    return digSum;
}
int main()
{
    cout << "sum = " << digitSum(2356);
    return 0;
}