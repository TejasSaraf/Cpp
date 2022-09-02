#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int a, int b);
    void sum(complex o1, complex o2);
    void getdata(void);
};

void complex::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}
void complex::sum(complex o1, complex o2)
{
    int c = a + b;
    cout << "The sum of complex numbers:" << c;
}
void complex::getdata()
{
    cout << "The value of a:" << a << endl;
    cout << "The value of b:" << b << endl;
}
int main()
{
    complex c1;
    c1.setdata(3, 5);
    c1.getdata();
    c1.sum(c1, c1);
    return 0;
}