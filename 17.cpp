#include<iostream>
using namespace std;

class addition{
    int a;
    friend addition setdata(addition o1,addition o2);
    public:
    void getdata(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"Sum:"<<a<<endl;
    }
};
addition setdata(addition o1,addition o2)
{
    addition a3;
    a3.getdata(o1.a+o2.a);
    return a3;
}
int main()
{
    addition a1,a2,sum;
    a1.getdata(2);
    a2.getdata(4);
    sum = setdata(a1,a2);
    sum.display();
    return 0;
}