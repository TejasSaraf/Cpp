#include <iostream>
using namespace std;

class employee
{
private:
    int a, b;

public:
    int c, d;
    void setdata(int a, int b);
    void getdata(int c, int d)
    {
        cout << a + b << endl;
        cout << b + c << endl;
        cout << c + d << endl;
        cout << d + a << endl;
    }
};
void employee ::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    employee e1;
    // e1.c=5;
    // e1.d=7;
    e1.setdata(6, 8);
    e1.getdata(5, 7);
    return 0;
}