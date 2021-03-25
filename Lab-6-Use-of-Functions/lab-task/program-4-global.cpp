/** Write a program that illustrates use of local, global and static variables */
#include <iostream>
using namespace std;
void func_1();
void func_2();
int a, b = 10;  // declaring and initializing global variables

int main()
{
    cout << "Global a "<< a << endl;
    cout << "Global b = " <<  b << endl;

    func_1();
    func_2();

    // signal to operating system program ran fine
    return 0;
}

void func_1()
{
    cout << "From func_1() Global a = =" <<  a << endl;
    cout << "From func_1() Global b = " <<  b << endl;
}

void func_2()
{
    int a = 5;
    cout << "Inside func_2() a = "<< a ;
}