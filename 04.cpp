#include <iostream>
using namespace std;

class Employee
{
    int counter;
    int id[100];
    int salary[100];

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setid(void)
    {
        cout << "Enter Id of employee"
             << " " << counter + 1 << endl;
        cin >> id[counter];
        counter++;
    }
    void getid(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "The id of employee"
                 << " " << id[i] << " "
                 << "is"
                 << " " << id[i] << endl;
        }
    }
};
int main()
{
    Employee e1;
    e1.initcounter();
    e1.setid();
    e1.setid();
    e1.setid();
    e1.getid();
    return 0;
}