#include <iostream>
using namespace std;

void swapMinAndMax(int arr[], int sz)
{
    if (sz < 2)
        return;

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < sz; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int sz = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapMinAndMax(arr, sz);

    cout << "Array after swapping min and max: ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
