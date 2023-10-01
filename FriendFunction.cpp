#include <iostream>
using namespace std;
class Y; // We have defined Y here.

class X
{
    int val;
    friend void add(X o1, Y o2); // It'll Ask for declaration of Y thats why we have declared Y on the top.
public:
    void getData(int a)
    {
        val = a;
    }
    void setData()
    {
        cout << "The value of val is " << val << endl;
    }
};
class Y
{
    int val2;
    friend void add(X o1, Y o2); // Friend function can be declared both in private or public.
public:
    void getData(int a)
    {
        val2 = a;
    }
    void setData()
    {
        cout << "The value of val is " << val2 << endl;
    }
};
void add(X o1, Y o2)
{
    cout << "The value of Sum is " << o1.val + o2.val2 << endl;
}
int main()
{
    X o1;
    o1.getData(10);
    o1.setData();
    Y o2;
    o2.getData(20);
    o2.setData();

    add(o1, o2);
    return 0;
}