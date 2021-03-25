/** Write a program that illustrates use of local, global and static variables */
#include <iostream>
using namespace std;
void function_1()
{
    int a, b; // you can use a and b within braces only
}

void function_2()
{
    //cout << a << endl; // ERROR, function_2() doesn't know any variable a
}
int main(void)
{
     int a = 100;

    {
        /*
            variable a declared in this block is
            completely different from variable
            declared outside.
        */
        int a = 10;  
        cout << "Inner a = " << a ;
    }

    cout << "Outer a = " << a ;
    
    return 0;
}