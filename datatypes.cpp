#include <iostream>
// #include <string>
using namespace std;

// variables are containers to hold data
int main()
{
    string myname = "Kalaivani";
    int score = 85;
    char zero = '0';
    bool is = true;
    float mydeci = 89.12345678;
    double bigdeci = 34.12345678965454545;
    cout << "my name : " << myname << endl;
    cout << score << endl;
    cout << "char uses ' ' quotes and can store one keyboard char at a time" << endl;
    cout << "int, whole numbers, takes 2 byte in 16-bit sys and 4 bytes in 32-bit systems and above" << endl;
    cout << "Char is 1 byte and is a single character" << endl;
    cout << "Boolean is also 1 byte, true or false w/o quotes, but when printed it is 1 or 0. " << is << endl;
    cout << "Float is 4byte but takes decimals upto 6 or 7. " << mydeci << endl;
    cout << "Double is 8 byte and takes decimals upto 15 decimals. " << bigdeci << endl;
    cout << "long Double is 12 byte and  " << bigdeci << endl;

    cout << "other than built-in dataypes, we have User-defined and Derived datatypes" << endl;

    cout << "User-defined = struct union enum" << endl;
    cout << " Derived dt = Array, function , pointer" << endl;

    return 0;
}