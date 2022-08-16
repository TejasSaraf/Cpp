#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void getdata()
    {
        cout << "The value :" << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.getdata();

    c2.setdata(3, 4);
    c2.getdata();

    c3.sum(c1, c2);
    c3.getdata();

    return 0;
}