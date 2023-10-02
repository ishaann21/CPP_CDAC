#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    float num1;
    float num2;

public:
    void get_nums_simple(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void Simple(void);
};

void SimpleCalculator::Simple()
{
    cout << "The Addition of the 2 numbers :- " << num1 + num2 << endl;
    cout << "The Subtraction of the 2 numbers :- " << num1 - num2 << endl;
    cout << "The Multiplication of the 2 numbers :- " << num1 * num2 << endl;
    if (num1 > num2)
    {
        cout << "The Division of the 2 numbers :- " << num1 / num2 << endl;
    }
    else
        cout << "The Division of the 2 numbers :- " << num2 / num1 << endl;
}

class ScientificCalculator
{
protected:
    double number1;
    double number2;

public:
    void get_nums_scientific(double n1, double n2)
    {
        number1 = n1;
        number2 = n2;
    }
    void Scientific(void);
};

void ScientificCalculator::Scientific()
{
    cout << "The Square of the 2 numbers :- " << pow(number1, 2) << " " << pow(number2, 2) << endl;
    cout << "The Cube of the 2 numbers :- " << pow(number1, 3) << " " << pow(number2, 3) << endl;
    cout << "The Sin of the 2 numbers :- " << sin(number1) << " " << sin(number2) << endl;
    cout << "The Tan of the 2 numbers :- " << tan(number1) << " " << tan(number2) << endl;
}

class hybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    public:
    void Display(){

    cout<< "The Addition of the 2 numbers :- " << num1 + num2 << endl;
    cout << "The Subtraction of the 2 numbers :- " << num1 - num2 << endl;
    cout << "The Multiplication of the 2 numbers :- " << num1 * num2 << endl;
    if (num1 > num2)
    {
        cout << "The Division of the 2 numbers :- " << num1 / num2 << endl;
    }
    else
        cout << "The Division of the 2 numbers :- " << num2 / num1 << endl;

    cout << "The Square of the 2 numbers :- " << pow(number1, 2) << " " << pow(number2, 2) << endl;
    cout << "The Cube of the 2 numbers :- " << pow(number1, 3) << " " << pow(number2, 3) << endl;
    cout << "The Sin of the 2 numbers :- " << sin(number1) << " " << sin(number2) << endl;
    cout << "The Tan of the 2 numbers :- " << tan(number1) << " " << tan(number2) << endl;
    }
};

int main()
{
    hybridCalculator h1;
    h1.get_nums_simple(20, 50);
    h1.get_nums_scientific(30, 60);
    h1.Display();
    return 0;
}