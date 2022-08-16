#include<iostream>
using namespace std;
class data2;
class data1{
    int a;
    public:
    void setdata(int value)
    {
        a=value;
    }
    friend void swap(data1 &,data2 &);
};
class data2{
    int b;
    public:
    void getdata(int value1)
    {
        b=value1;
    }
    friend void swap(data1 &,data2 & );
};
void swap(data1 &o1,data2 &o2)
{
    int temp = o1.a;
    o1.a=o2.b;
    o2.b=temp;
    cout<<"The value of a:"<<o1.a<<endl;
    cout<<"The value of b:"<<o2.b<<endl;
}
int main()
{
    data1 d1;
    data2 d2;
    d1.setdata(3);
    d2.getdata(5);
    swap(d1,d2);


    return 0;
}