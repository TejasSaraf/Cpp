#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    friend Complex sumdata(Complex o1, Complex o2);

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << a << " "
             << "+" << b << "i" << endl;
    }
};
Complex sumdata(Complex o1, Complex o2)
{
    Complex c3;
    c3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return c3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setdata(3, 4);
    c1.getdata();

    c2.setdata(1, 2);
    c2.getdata();

    sum = sumdata(c1, c2);
    sum.getdata();
    return 0;
}
