#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
    
}
int main()
{
    int n=8;
    for(int i=0;i<n;i++){
    cout<<fibonacci(i)<<" ";
    }
    return 0;
}