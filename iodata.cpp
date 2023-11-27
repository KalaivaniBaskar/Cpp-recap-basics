#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char key[25], buffer[25];
    cout << "Enter the key string: ";
    cin >> key;
    cout << "Enter the buffer string: ";
    // cin.getline(buffer, 25);
    cin >> buffer;
    strcat(key, buffer);
    cout << "Key = " << key << endl;
    cout << "Buffer = " << buffer << endl;
    cout << "Hello" << endl;
    cout << "input stream - flow of bytes from keyboard/device to mainmemory" << endl;
    cout << "output stream - flow of bytes from meinmemory to display/ op device" << endl;
    cout << " cout insertion op, cin extraction op " << endl;
    cout << "system header files = comes w compiler, userdefined header  #include userhd.h, looks for a file name userhd.h in current directory" << endl;
    return 0;
}
