#include<iostream>
using namespace std;

class Number{
    int num1;
    int num2;
    int num3;
    public:
    Number(){}
    Number(int a){
        num1=a;
        cout<<"Number 1:"<<num1<<endl;
    }
    Number(int x,int y){
        num2=x;
        num3=y;
        cout<<"The addition of x and y:"<<num2+num3<<endl;
    }
    Number(Number &n){
        cout<<"Copy constructor called!!"<<endl;
    }
};
int main()
{
    Number n1,n2(5),n3(2,2);
    Number n4(n1);
    return 0;
}