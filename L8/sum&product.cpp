#include <iostream>
using namespace std;
int sumOfNumbers(int sz, int arr[])
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int productOfNumbers(int sz, int arr[])
{
    int product = 1;
    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of numbers in the array: " << sumOfNumbers(sz, arr) << endl;
    cout << "Product of numbers in the array: " << productOfNumbers(sz, arr) << endl;
    return 0;
}
