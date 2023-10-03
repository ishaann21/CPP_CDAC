#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void set_roll(int n1)
    {
        rollno = n1;
    }
    void get_roll(void)
    {
        cout << "The roll number of the student is  " << rollno << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float n1, float n2)
    {
        maths = n1;
        physics = n2;
    }
    void get_marks(void)
    {
        cout << "The Marks in Maths of the student is " << maths << endl;
        cout << "The Marks in Physics of the student is " << physics << endl;
    }

};
class Sports:virtual public Student{
    protected:
    int score;
    public:
    void set_score(int s1){
        score=s1;
    }
    void get_score(void){
        cout<<"The Score of the Student in sports is : "<<score<<endl;
    }
};
class Result:public Test,public Sports{
    protected:
    int total;
    public:
    void result(void){
        total=score+maths+physics;
        cout<<"The Total of the student is  "<<total<<endl;
    }
};
int main()
{
    Result s1;
    s1.set_roll(101);
    s1.get_roll();
    s1.set_marks(80,90);
    s1.get_marks();
    s1.set_score(9);
    s1.get_score();
    s1.result();
    return 0;
}