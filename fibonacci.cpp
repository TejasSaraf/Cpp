#include<iostream>
using namespace std;
void fibonacci();

void fibonacci(int a,int b,int n)
{
    int c;
    for(int i=0;i<n;i++)
    {
    c=a+b;
    a=b;
    b=c;
    cout<<c;
    }
    
}

int main()
{
    int n1=0,n2=1,n;
    cout<<"Enter Number To Print Fibonacci series:";
    cin>>n;
    cout<<n1<<n2;
    fibonacci(n1,n2,n);
    
    
    return 0;
}