// 1. sequence structure - regular pgm runs in line by line seq
// 2. selection structure - if else, switch
// 3. loop structure - for, while, do while

// tip: click on settings wheel and sel user snippets
// select cpp as language
// in the given json file, edit the example json like below and uncomment
// // "boilerplate": {
// 		"prefix": "boilerplate code",
// 		"body": [
// 			"#include<iostream>",
// 			"using namespace std;\n",
// 			"int main() {",
// 			"$1",
// 			"$1",
// 			"    return 0;",
// 			"}"
// 		],
// 		"description": "This is cpp boilerplate"
// 	}
// as you type boi.. in any .cpp file you'll get this template

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int age = 18;
    /* code */
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    default:
        cout << "You are not 18" << endl;
        break;
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    return 0;
}