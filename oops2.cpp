#include <iostream>
using namespace std;

// passing objs as param
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    // this fn takes 2 objects as inp param
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

// friend functions:
// an external fn can access a class member data if it is mentioned
// in the class , specify that external fn's declaration preceded by 'friend' keyword, can be public or private
// it is not a fn/method of the class but remains an external fn wch is a friend to the class
// w this an external fn can access the private data of a class
// it is called as a regular fn call, not called using instances
// it usually uses obj as inp arguments
// it cannot access the class members in it, it needs obj instances to access the class members/methods

int main()
{

    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    // we are passing 2 obj instances as arguments to ths fn
    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}