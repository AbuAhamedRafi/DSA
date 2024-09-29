#include<iostream>
using namespace std;
int main(){
    // int n=10;
    // int sum =0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<"sum= "<<sum<<endl;
    // return 0;
    int n=50;
    int i=1;
    int sum=0;
    while (i<=n)
    {
        sum += i;
        i++;
    }
    cout<<"sum of "<<n<< " is= "<<sum<<endl;
    return 0;
    
}