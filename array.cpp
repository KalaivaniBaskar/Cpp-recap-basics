#include <iostream>
using namespace std;

int main()
{
    // array - contiguous memory locations

    int marks[5] = {1, 2, 3, 4, 5};
    cout << marks[3] << endl;

    cout << marks << endl;     // 0x61fefc = arr name always stores the address of 0th index of the array
    cout << &marks[0] << endl; // 0x61fefc
    cout << &marks[1] << endl;
    cout << &marks[2] << endl;
    cout << &marks[3] << endl;
    cout << &marks[4] << endl;

    // pointer arithmetic :
    // when incrementing a pointer var, say in a loop
    // new addr(p+i) = curr addr(p) + [i * size of data type ]
    cout << "using array with pointer:  \n";
    int *p = marks; // already wkt marks = &marks[0]
    // so now, p holds addr of marks[0] and *p will refer to value at marks[0]
    for (int i = 0; i < 4; i++)
    {
        cout << p + i << endl;
        p = p + i; // curr addr(p) + [i * size of data type ]
        cout << *p << endl;
    }
    cout << "using char array with pointer:  \n";
    // let see a char array ex - not working as expected
    // char grade[3] = {'S', 'A', 'B'};
    // char *g = grade;
    // cout << grade << endl;     // 0x61fefc
    // cout << &grade[0] << endl; // 0x61fefc
    // cout << &grade[1] << endl;
    // cout << &grade[2] << endl;
    // cout << "_-------------" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << g + i << endl;
    //     g = g + i; // curr addr(g) + [i * size of data type ]
    //     cout << *g << endl;
    // }
    return 0;
}