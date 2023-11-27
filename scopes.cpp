#include <iostream>
using namespace std;
int glo = 100;
void sum()
{
    int a = 2;
    cout << "local a " << a << endl;
    cout << "global outside main, inside fn " << glo << endl;
}
int main()
{
    int glo = 90;

    cout << "Hello" << endl;
    sum();
    // cout << "Local" << a << endl; // error
    cout << "Global inside main " << glo << endl;

    cout << "Local variable - declared inside a fn, accessed only with in the braces" << endl;
    cout << "Global variable - outside any fn - can be accessed anywhere" << endl;
    cout << "when loc and glo have same name, as per scope local var has precedence in the local scope" << endl;
    return 0;
}