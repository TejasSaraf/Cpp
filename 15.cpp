#include<iostream>
using namespace std;

class add{
    int a;
    int b;
    public:
    add()
    {
        cout<<"The addition :"<<endl;
    }
    add(int c,int d)
    {
        a=c;
        b=d;
    } 
    friend void getdata(add x);
};
void getdata(add x)
{
    int y;
    y=x.a+x.b;
    cout<<y<<endl;
}
int main()
{
    add a1();
    add a2(3,2);
    getdata(a2);
    return 0;
}
