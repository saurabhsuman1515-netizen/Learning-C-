#include <iostream>
using namespace std;
int main() {
    // Integer data types
    int myInt = 42;
    long myLong = 1234567890L;
    short myShort = 32767;
    unsigned int myUnsignedInt = 4000000000U;

    // Floating-point data types
    float myFloat = 3.14f;
    double myDouble = 3.141592653589793;

    // Character data type
    char myChar = 'A';

    // Boolean data type
    bool myBool = true;

    // Output the values
    cout << "Integer: " << myInt << endl;
    cout << "Long: " << myLong << endl;
    cout << "Short: " << myShort << endl;
    cout << "Unsigned Int: " << myUnsignedInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Character: " << myChar << endl;
    cout << "Boolean: " << (myBool ? "true" : "false") << endl;

    return 0;
}