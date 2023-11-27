#include <iostream>
using namespace std;

int main()
{
    // reference var - a var that tracks the value of another var
    // & is address of oper
    int a = 100;
    int &b = a;
    int &c = a;

    cout << a << b << c << endl;
    a = 200;
    cout << a << b << c << endl;

    // Pointer * : a different data type which holds the address of other data types
    //  a notation * is used
    //  * is dereferencing op - value at oper
    //  & is address of oper - address of a var

    int x = 10;
    int *y = &x;
    cout << y << endl;                // 0x61feec
    cout << &x << endl;               // 0x61feec = addr of x
    cout << " *y is: " << *y << endl; // 10 value at(0x61feec)
    cout << " x is: " << x << endl;   // 10 val of x

    // Pointer to a pointer variable **:  a pointer that stores the address of a pointer var

    int **z = &y;
    cout << z << endl;                 // 0x61fee8 = address of y
    cout << &y << endl;                // 0x61fee8
    cout << *z << endl;                // value at z = val of y= 0x61feec = addr of x
    cout << "**z is: " << **z << endl; // 2 ** means 2 value at
    // value at(value at z) = value at(0x61feec)
    return 0;
}