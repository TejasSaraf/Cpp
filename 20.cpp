#include <iostream>
#include <math.h>
using namespace std;
class Point_2;
class Point_1
{
    int a;
    int b;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    friend void showdata(Point_1 o1, Point_2 o2);
};
class Point_2
{
    int c;
    int d;

public:
    void getdata(int c1, int d1)
    {
        c = c1;
        d = d1;
    }
    friend void showdata(Point_1 o1, Point_2 o2);
};
void showdata(Point_1 o1, Point_2 o2)
{
    int x;
    x = ((o1.a - o1.b) * (o1.a - o1.b)), ((o2.c - o2.d) * (o2.c - o2.d));
    cout << "The distance between two points is:" << sqrt(x) << endl;
}
int main()
{
    Point_1 p1;
    Point_2 p2;
    p1.setdata(2, 4);
    p2.getdata(2, 4);
    showdata(p1, p2);
    return 0;
}