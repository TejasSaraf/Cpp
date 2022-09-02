#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setdata(void);
    void getdata(void);
    static void getcount(void)
    {
        cout << "The Count is:" << count;
    }
};
int Employee ::count;
void Employee::setdata()
{
    cout << "Enter id:";
    cin >> id;
    count++;
}
void Employee::getdata()
{
    cout << "The employee id:" << id << endl;
}

int main()
{
    Employee e1, e2, e3;
    e1.setdata();
    e1.getdata();
    e1.getcount();

    e2.setdata();
    e2.getdata();
    e2.getcount();

    e3.setdata();
    e3.getdata();
    e3.getcount();
    return 0;
}