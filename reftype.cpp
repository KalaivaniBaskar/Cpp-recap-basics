#include <iostream>
#include <iomanip>
using namespace std;
int c = 100;
int main()
{
    int a, b, c;
    // cout << "Enter a:" << endl;
    // cin >> a;
    // cout << "Enter b:" << endl;
    // cin >> b;
    // cout << "Enter c:" << endl;
    // cin >> c;
    // cout << "local c " << c << endl;
    cout << "global c " << ::c << endl;
    //  use scope resolution op :: to access global var1

    float d = 34.5f;
    long double e = 34.5l;
    double f = 34.5; // default dt for decimal val

    cout << (sizeof(d)) << endl; // 4
    cout << (sizeof(e)) << endl; // 12
    cout << (sizeof(f)) << endl; // 8

    //********** Reference Variables
    // rohan aka monty aka rohu aka roadrashRohan
    // ref var also get sep memory allocated ? but value points to the val of var it refers to ?
    long double p = 455.558905; //
    long double &q = p;         // q is a refernce variable that points to p
    cout << p << endl;          //  def 3 decimal points is printed?
    cout << q << endl;
    q = 555; // changing ref var will also be seen in p
    // both refer to the same value
    cout << p << endl;
    cout << q << endl;           // change in p is also seen in q
    cout << (sizeof(p)) << endl; // 4
    cout << (sizeof(q)) << endl;
    float y = 90.75898;
    int z = 9;
    //********** Type Casting
    cout << (int(y)) << endl;   // 90
    cout << (float(z)) << endl; // 9

    // DECLARE CONSTANT VAR USING const
    const float PI = 3.14;

    // io manip header file, set width fn to align
    cout << "set wid :" << setw(4) << y << endl;
    cout << "set wid :" << setw(4) << z << endl;

    // operator precedence

    return 0;
}

// 34.4 is float or double ? by default its seen as double
//  since both float and double have decimal values, to differentiate, we use 34.5f to identify floating num
// and 34.5l to id a long double
// when passing values to fn, make sure use appropriate suffix f or l , esp useful in fn overloading
//  F or L, f or l