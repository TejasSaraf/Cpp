#include<iostream>
using namespace std;

class Student{
    protected:
    int a;
    public:
        
        void set_rollno(int x){
            a=x;
            cout<<"Your roll no is:"<<a<<endl;
        }
};
class Test:virtual public Student{
    protected:
    int maths;
    int physics;
    public:
    
        void set_marks(int m,int n){
            maths=m;
            physics=n;
        }
};
class Sports:virtual public Student{
    protected:
    int score;
    public:
    
    void set_score(int h){
        score=h;
    }
};
class Result:public Test,public Sports{
    public:
    
        void display(void){

            int total=maths+physics+score;

            cout<<"Maths:"<<maths<<endl;
            cout<<"Physics:"<<physics<<endl;
            cout<<"Sports:"<<score<<endl;
            cout<<"Total Marks Obtained:"<<total<<endl;
        }
};
int main(){
    Result r1;
    r1.set_rollno(21);
    r1.set_marks(99,89);
    r1.set_score(9);
    r1.display();
    return 0;
}