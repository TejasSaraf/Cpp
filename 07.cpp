#include <iostream>
using namespace std;

class Employee
{
    int id;

public:
    void setdata()
    {
        cout << "Enter Id Of employee:" << endl;
        cin >> id;
    }
    void getdata()
    {
        cout << "The id of employee is:" << id << endl;
    }
};
int main()
{
    Employee e1[4];
    for (int i = 0; i < 4; i++)
    {
        e1[i].setdata();
    }
    for (int i = 0; i < 4; i++)
    {
        // e1[i].setdata();
        e1[i].getdata();
    }

    return 0;
}