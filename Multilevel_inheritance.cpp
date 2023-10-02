#include <iostream>
using namespace std;
class Student
{
protected:
    int rollno;

public:
    void getRollno();
    void setRollno(int);
};
void Student::setRollno(int n)
{
    rollno = n;
}
void Student::getRollno()
{
    cout << "The Roll Number of the student is  " << rollno << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void getMarks()
    {
        cout << "The marks of Physics are  " << physics << endl;
        cout << "The marks of Maths are  " << maths << endl;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        cout << "The Roll number of the student is " << rollno << endl;
        cout << "The marks of Roll number " << rollno << " in Maths is " << maths << endl;
        cout << "The marks of Roll number " << rollno << " in Physics is " << physics << endl;
        cout << "The percentage of the student is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result s1;
    s1.setRollno(10);
    s1.getRollno();
    s1.setMarks(80, 90);
    s1.display();
    return 0;
}