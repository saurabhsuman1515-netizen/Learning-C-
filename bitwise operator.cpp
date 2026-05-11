#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    
    cout<< (a&b)<< endl; // bitwise and operator
    cout << (a|b) << endl;// bitwise or operator
    cout << (a^b) << endl;// bitwise xor operator
    cout << (~a) << endl;// bitwise not operator
    cout << (a<<1) << endl;// left shift operator
    cout << (a>>1)   << endl;// right shift operator    

}