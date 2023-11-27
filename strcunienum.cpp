#include <iostream>
using namespace std;
struct employee // a total of 9 bytes is set aside
{
    int id;       // 4
    char dept;    // 1
    float salary; // 4
};

// typedef just gives a new referring name
// struct employeeRev can now be refered as er
// gives a shortcut6
typedef struct employeeRev
{
    int id;
    char dept;
    float salary;
    float raise;
} er;

// in Union only any one of the values is stored
// only one memory is used i.e a max of 4 byte is used and that is used to store any of the one val
union criteria
{
    char grade; // 1 byte
    float mark; // 4 byte
    int rank;   // 4 by
};

int main()
{
    struct employee harry;
    harry.id = 1001;
    harry.dept = 'P';
    harry.salary = 7523.25;

    cout << harry.id << endl;
    cout << harry.dept << endl;
    cout << harry.salary << endl;

    er joy;
    joy.id = 1005;
    joy.dept = 'K';
    joy.salary = 5683.55;
    joy.raise = 103.22;

    // first grade is stored
    union criteria u1;
    u1.grade = 'C';
    cout << u1.grade << endl; // C
    u1.rank = 4;
    cout << u1.grade << endl; // garbge
    cout << u1.rank << endl;  // 4

    // enum
    enum Meal
    {
        bf,
        lunch,
        dinner
    };
    Meal m1 = bf;
    cout << m1 << endl; // 0
    m1 = lunch;
    cout << m1 << endl; // 1

    return 0;
}