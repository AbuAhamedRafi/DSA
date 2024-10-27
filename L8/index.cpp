#include <iostream>
using namespace std;
int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    for (int i = 0; i < size; i++) {
        if (nums[i] == smallest) {
            cout << "Index of the smallest element: " << i << endl;
            break; 
        }
    }

    for (int i = 0; i < size; i++) {
        if (nums[i] == largest) {
            cout << "Index of the largest element: " << i << endl;
            break; 
        }
    }
    
    return 0;
}