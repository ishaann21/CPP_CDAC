/*This is a function for Ambiguity resolution .
WHen same functions of base classes are inherited then which function to use is specified
using BASE1::function_name();
*/

#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"Hello I am Base1"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Hello I am Base2";
    }

};
class Derived:public Base1,public Base2{
    public:
    void greet(){
        Base2::greet();
        cout<<endl;
    }
};
int main()
{
    Derived a1;
    a1.greet();
    return 0;
}
