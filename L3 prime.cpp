#include<iostream>
using namespace std;
int main(){
    int n=9;
    bool isPrime=true;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime==true)
    {
        cout<<"prime number\n";
    }else{
        cout<<"not a prime number\n";
    }
    
    return 0;   
    
}