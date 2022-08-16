#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setdata(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void sum(complex o1,complex o2)
    {
        int c3;
        c3=((o1.a+o2.a),(o1.b+o2.b));
        cout<<c3;
    }
    void getdata()
    {
        cout<<a<<" + "<<b<<endl;

    }
};
int main()
{
    complex o1,o2;
    o1.setdata(3,4);
    o2.setdata(4,5);
    o1.getdata();
    o2.getdata();
    o1.sum(o1,o2);
    o2.sum(o1,o2);
    return 0;
}