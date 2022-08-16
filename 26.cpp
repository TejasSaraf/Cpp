#include<iostream>
using namespace std;

template <class t1,class t2,class t3,class t4>
class Complex{
    t1 a;
    t2 b;
    t3 c;
    t4 d;
    public:
    Complex(t1 x,t2 y,t3 m,t4 n){
        a=x;
        b=y;
        c=m;
        d=n;
    }
    
    void display(){
        cout<<"Addition of real parts is "<<a<<" + "<<b<<"i"<<endl;
        cout<<"Addition of imaginary parts is "<<c<<" + "<<d<<"i"<<endl;

    }
};

int main(){
    Complex<int,int,float,float> obj(2,3,1.1,2.3);
    obj.display();
    return 0;
}