#include<iostream>
using namespace std;
void primeNumber(int n)
{
    int i;
    int flag=1;
    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if (flag)
    {
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The Number is Not Prime"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    primeNumber(n);
    return 0;
}