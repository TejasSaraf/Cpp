#include<iostream>
using namespace std;

class X;
class Y{
    int b;
    public:
    void setdata(int y)
    {
        b=y;
    }
    friend void display(X , Y);
};

class X{
    int a;
    public:
    void getdata(int x)
    {
        a=x;
    }
    friend void display(X,Y);
};
void display(X o1,Y o2)
{
    cout<<"Addition:"<<o1.a+o2.b<<endl;
}

int main()
{
    X x1;
    Y y1;
    x1.getdata(2);
    y1.setdata(6);
    display(x1,y1);
    return 0;
}