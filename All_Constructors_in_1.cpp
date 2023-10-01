/* This a program to show all types of Constructors. Default constructor, parameterized 
and we have also seen constructor overloading .*/


#include<iostream>
using namespace std;
class X{
    int val1;
    int val2;
    int val3;
    public:
    X(){           // Default Constructor
        val1=10;
        val2=20;
        val3=30;
    }
    X(int a,int b=420){   // Parameterised Constructor
        val1=a;
        val2=b;
        
    }
    X(int a,int b,int c)
    {
        val1=a;
        val2=b;
        val3=c;
    }
    void printdata(void);
    
};
void X:: printdata(void){
    cout<<"The value of Val1 "<<val1<<endl;
    cout<<"The value of Val2 "<<val2<<endl;
    cout<<"The value of Val3 "<<val3<<endl;

}
int main()
{
    X a;
    X b(100,200,300);
    X c(300);
    a.printdata();
    cout<<endl;
    b.printdata();
    cout<<endl;
    c.printdata();
    return 0;
}