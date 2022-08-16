#include <iostream>
using namespace std;

class student
{
    string name;
    static int age;
    bool gender;

public:
    void setdata();
    void getdata();
};
int student ::age;
void student ::setdata()
{
    cout << "Enter name:" << endl;
    cin >> name;
    cout << "Enter age:" << endl;
    cin >> age;
    cout << "Enter gender:" << endl;
    cin >> gender;
    
}
void student ::getdata()
{
    cout << "Name of Student " << name << endl;
    cout << "Age of student " << age << endl;
    cout << "Gender of student " << gender << endl;
}

int main()
{
    student s[2];
    for (int i = 0; i < 2; i++)
    {
        s[i].setdata();
    }

    for (int i = 0; i < 2; i++)
    {
        s[i].getdata();
    }
    return 0;
}