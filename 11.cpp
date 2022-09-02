#include <iostream>
using namespace std;

class employee
{
    static int count;
    int id;

public:
    void setdata()
    {
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The id of employee " << count << " "
             << "is"
             << " " << id << endl;
    }
};
int employee ::count;
int main()
{
    employee e1, e2, e3;
    e1.setdata();
    e1.getdata();

    e2.setdata();
    e2.getdata();

    e3.setdata();
    e3.getdata();
    return 0;
}