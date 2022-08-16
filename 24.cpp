#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    void calculation(int x, int y)
    {
        a = x;
        b = y;
    }
};

class ScientificCalculator
{
protected:
    int m;
    int n;

public:
    void ScientificCalculation(int x, int y)
    {
        m = x;
        n = y;
    }
};

class display : public SimpleCalculator, public ScientificCalculator
{
public:
    void show_SimpleCalculator(void)
    {
        cout << "Addition:" << a + b << endl;
        cout << "Subtraction:" << a - b << endl;
        cout << "Multiplication:" << a * b << endl;
        cout << "Division:" << a / b << endl;
    }
    void show_ScientificCalculator(void)
    {
        cout << "Power:" << pow(m, n) << endl;
        cout << "Sin:" << sin(m) << endl;
        cout << "Square:" << sqrt(m) << endl;
        cout << "Tan:" << tan(m) << endl;
    }
};
int main()
{
    display d1;
    d1.calculation(10, 2);
    d1.ScientificCalculation(10, 2);
    d1.show_SimpleCalculator();
    d1.show_ScientificCalculator();
    return 0;
}