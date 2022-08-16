#include <iostream>
using namespace std;

class employee
{
    static int id;

public:
    static void setdata();
    void getdata()
    {
        cout << "The id of employee is:" << id << endl;
    }
};
int employee::id;
void employee::setdata()
{
    cin >> id;
}
int main()
{
    employee e1, e2;
    employee::setdata();
    e1.getdata();

    employee::setdata();
    e2.getdata();
    return 0;
}