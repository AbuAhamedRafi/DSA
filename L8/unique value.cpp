#include<iostream>
using namespace std;
int uniqueValue(int sz, int arr[]){
    int unique = arr[0];
    for(int i = 1; i < sz; i++){
        unique = unique ^ arr[i];
    }
    return unique;
}

int main(){
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int sz = sizeof(arr)/sizeof(arr[0]);
    cout<<uniqueValue(sz, arr);
    return 0;
}