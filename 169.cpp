#include <iostream>
using namespace std;

// int main()
// {
//     int arr[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;
//     int smallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }
//     cout << "smallest: " << smallest << endl;
//     int target = smallest;
//     for (int i = 0; i < size; i++){
//         if (arr[i] == target)
//         {
//             cout << "Element found at index: " << i << endl;
//             break;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;
//     int target = -15;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             cout << "Element found at index: " << i << endl;
//             break;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;
//     int smallest = INT_MAX;
//     int index = -1; // To store the index of the smallest element

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//             index = i; // Update index whenever a new smallest is found
//         }
//     }
//     cout << "smallest: " << smallest << endl;
//     cout << "Element found at index: " << index << endl;

//     return 0;
// }
void Reverse(int arr[], int size){
    int start=0;
    int end=(size-1);
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    
}
int main(){
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(arr)/sizeof(arr[0]);
    Reverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}