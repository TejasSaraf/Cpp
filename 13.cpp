#include<iostream>
using namespace std;

class addition{
    int a;
    int b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void getdata()
    {
        cout<<a<<" "<<b<<endl;
    }
    
};
int main()
{
    addition a1,a2;
    a1.setdata(3,4);
    a1.getdata();
    return 0;
}