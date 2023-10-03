#include<iostream>
using namespace std;
class Base1{
    protected:
    int num1;
    
    public:
    Base1(int n1){
        num1=n1;
        
        cout<<"The constructor of BASE1 is invoked "<<endl;

    }


};
class Base2{
   protected:
    int num2;
    public:
    Base2(int n2){
        num2=n2;
        cout<<"The constructor of Base2 is invoked"<<endl;
    }
};
class Derived:public Base1,public Base2{
    protected:
    int num3;
    public:
    Derived(int a,int b,int c):Base1(a),Base2(b){
        num3=c;
        cout<<"The Constructor of Derived class is Invoked  "<<endl;
        cout<<"The value of Num1 is -"<<num1<<endl;
        cout<<"The value of Num2 is -"<<num2<<endl;
        cout<<"The value of Num3 is -"<<num3<<endl;
        
    } 
};
int main()
{
    Derived c1(10,20,30);
    return 0;
}