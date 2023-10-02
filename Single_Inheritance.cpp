/* This is a program for Single Class Inheritance.
1. Object of Derived class can also call the functions of the base class.
2. If we specify Public then public members of the base class will be the public members of the derived class.
3. If we specify Private then the public members of the base class will be private members of the derived class.
4. In the function PROCESS of the derived class we have used the getData1 function of base class because we have no access to data1
as it is private.
5. All the private members will be accessed using Member function.   */

#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata(int, int);
    int getData1();
    int getData2();
};

void Base::setdata(int a, int b)
{
    data1 = a;
    data2 = b;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    int process();
    void display();
};

int Derived::process()
{
    data3 = data2 * getData1(); // Give Function like function1(). Means in ().
    return data3;
}
void Derived::display()
{
    cout << "The value of Data1 is  " << getData1() << endl; // Give Function like function1(). Means in ().
    cout << "The value of Data2 is  " << data2 << endl;
    cout << "The value of Data3 is  " << data3 << endl;
}
int main()
{
    Derived s1;
    s1.setdata(10, 20);
    s1.process();
    s1.display();
    return 0;
}