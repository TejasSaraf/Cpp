#include<iostream>
using namespace std;

int main()
{
    // int a=5;
    // int *ptr;
    // ptr=&a;
    // cout<<ptr++<<endl;
    // cout<<ptr<<endl;
    
    // cout<<ptr+1<<endl;
    // cout<<&(ptr)<<endl;


    // char c='A';
    // char *p=&c;
    // cout<<"Size Of :"<<sizeof(p)<<endl;

    int arr[10]={1,3,3,4};
    // arr = arr+1; cannot be modified
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    // cout<<*arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    cout<<arr[2]<<endl;
    cout<<2[arr]<<endl;

    double a=4535;
    double *d=&a;
    cout<<d<<endl;
    cout<<sizeof(d)<<endl;

    unsigned x=-2;
    unsigned *un=&x;
    // cout<<sizeof(x)<<endl;
    cout<<sizeof(un)<<endl;



    return 0;
}