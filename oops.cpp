#include <iostream>
using namespace std;

// diff b/w struct and classes:
// all data in struct are public, an structs cannot have methods
// classes can have private public attrib n methods
// nesting of member fn, calling membr fns within other member fns

// memory is not allocated for class var
// memory is allocated only when an object instance of a class is created

// ***** static and classes:
// classes can have static var too, so a var value is retained between multiple objects of the same class.
// static var - only one copy is created for a class

// static fns - these are needed when a fn is to access only static var
// static fns can run using the class, does not need an object instance to run it
// static fns canot use attrib of a clss, it only allowed to use static var of the class
// static var and static fns are not tied to an instance

class Employee
{
private: // dfault is private if nothing is specified
    int age;
    static int count;

public:
    int experience;
    char level;
    void setData(int, int);
    void getData()
    {
        cout << "age" << age << endl;
        cout << "exp" << experience << endl;
        cout << "lvl" << level << endl;
    }

    static void printCount(void)
    {
        // cout << age ; will throw error
        cout << "count" << count << endl;
    }
};

// to initiatize a static member var
int Employee ::count = 1000;

// function can also be defined outside , after declaring it inside
void Employee ::setData(int a, int b)
{
    age = a;
    experience = b;
    count++; // modifies the static var
}

int main()
{
    Employee ::printCount();

    Employee harry;
    harry.setData(35, 12);
    harry.level = 'F';
    harry.getData();

    Employee ::printCount(); // calling a static fn using class
    Employee diane;
    diane.setData(35, 12);
    diane.level = 'F';
    diane.getData();

    Employee ::printCount(); // calling a static fn using class

    // create many instances
    // use array
    cout << "\n using arrays w classess and objects \n";
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        Employee ::printCount();
        fb[i].setData(i * 5, i * 2);
        fb[i].level = 'W';
        fb[i].getData();
    }
    return 0;
}