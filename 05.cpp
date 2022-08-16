#include<iostream>
using namespace std;

class Employee{
    static int count;
    int id[10];
    int salary[10];
    public:
    void setdata(void);
    void getdata(void);
};
int Employee::count;
void Employee::setdata()
{
    cout<<"Enter Employee Id:";
    cin>>id[count];
    cout<<"Enter Employee salary:";
    cin>>salary[count];
    count++;
}
void Employee::getdata()
{
    for(int i=0;i<count;i++){
    cout<<"The id of employee "<<id[i]<<"is"<<id[i]<<endl;
    }
    for(int i=0;i<count;i++){
    cout<<"The salary of employee "<<id[i]<<"is"<<salary[i]<<endl;
    }
}

int main()
{
    Employee e1;
    e1.setdata();
    e1.setdata();
    e1.getdata();
    return 0;
}