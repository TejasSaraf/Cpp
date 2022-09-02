#include <iostream>
#include <math.h>
using namespace std;

class Point_2; // forward declaration
class Point_1
{
    int a;
    int b;

public:
    Point_1(int a1, int b1 = 1)
    { // constructor with default arguments
        a = a1;
        b = b1;
    }
    friend void distance(Point_1 o1, Point_2 o2); // friend function declaration
};
class Point_2
{
    int c;
    int d;

public:
    Point_2(int c1, int d1)
    {
        c = c1;
        d = d1;
    }
    friend void distance(Point_1 o1, Point_2 o2);
};
void distance(Point_1 o1, Point_2 o2)
{
    int x;
    x = ((o1.a - o1.b) * (o1.a - o1.b)), ((o2.c - o2.d) * (o2.c - o2.d));
    cout << "The distance between two points (x1,x2) and (y1,y2) is:" << sqrt(x) << endl;
}
int main()
{
    Point_1 p1(1);
    Point_2 p2(1, 1);
    distance(p1, p2); // objects as arguments
    return 0;
}