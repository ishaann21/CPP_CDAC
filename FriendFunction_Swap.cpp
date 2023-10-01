#include<iostream>
using namespace std;
class num2;
class num1{
   int val;
   friend void swap(num1 &o1,num2 &o2);
   public:
   void getData(int a){
    val=a;
}
void setData(void){
    cout<<"The value of NUM1 -"<<val<<endl;
}
};
class num2{
    int val2;
    friend void swap (num1 &o1,num2 &o2);
    public:
    void getData(int a){
        val2=a;
    }
    void setData(void){
        cout<<"The value of NUM2 -"<<val2<<endl;

    }
};

void swap (num1 &o1,num2 &o2){
    int temp;
    temp=o1.val;
    o1.val=o2.val2;
    o2.val2=temp;
    cout<<"The value of NUM1 after swaping is "<<o1.val<<endl;
    cout<<" The value of NUM2 after swaping is  "<<o2.val2<<endl;
}
int main()
{
    num1 o1;
    o1.getData(20);
    o1.setData();
    num2 o2;
    o2.getData(50);
    o2.setData();
    swap(o1,o2);
    return 0;
}