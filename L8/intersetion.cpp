#include <iostream>
using namespace std;

void intersection(int a[], int b[], int sizeA, int sizeB) {
    cout << "Common elements: ";
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;  // Move to the next element in `a` to avoid duplicates
            }
        }
    }
    cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {4, 5, 6, 7, 8};
    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    intersection(a, b, sizeA, sizeB);
    return 0;
}
