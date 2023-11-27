// unlike JS where functions are hoisted to top of scope
// here in cpp, fns are not automatically hoisted to top and execution ends with main() fn
// so either define and declare everything above main
// or give a simple fn declaration before main
// and define the fn later in the pgm

#include <iostream>
using namespace std;
// fn-return-type  fn-name(parameter-type );
// a fn declaration
int sum(int, int);
void greet(void);
void swap(int *, int *);
void swapRef(int &, int &);

int main()
{
    int x = 9;
    int y = 4;
    cout << sum(x, y) << endl;
    greet();

    // call by reference - using pointer var
    int kk = 123;
    int mm = 890;

    cout << "before\t" << kk << "\t" << mm << endl;
    swap(&kk, &mm); // passing the address of kk, mm
    cout << "after\t" << kk << "\t" << mm << endl;
    swapRef(kk, mm); // passing the var kk, mm
    // kk will be received by ref var &k , likewise mm
    // tthe ref var k always points to kk
    cout << "after\t" << kk << "\t" << mm << endl;

    return 0;
}

// this is a full fn definition
int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    cout << "Hello \n";
}
// Formal Parameter: A variable and its type as they appear in the prototype of the function or method.
// a and b - formal
// Actual Parameter: The variable or expression corresponding to a formal parameter that appears in the function or method call in the calling environment.
// x and y - actual

// call by reference - using pointer var
void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// call by reference - using ref var
void swapRef(int &k, int &m)
{
    // k reference var to kk, m ref var to mm
    cout << k << "-" << m << endl;
    int temp = k;
    k = m;
    m = temp;
    cout << k << "-" << m << endl;
}

// what happens when a fn is called
// actual par gets copied in formal param
// then inside calculations are done
// then return the val

// inline fn reduces overhead
// it can be done for fns with few lines of code
// it replaces fn call w fn code at runtime

// static variables
// initialize the var once , during 1st fn call
// retains var value in between fn calls

// const for constant var