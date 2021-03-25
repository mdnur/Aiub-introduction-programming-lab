/** Write a program that illustrates use of local, global and static variables */
#include <iostream>
using namespace std;
void func_1();
int a, b = 10;

int main()
{
    func_1();
    func_1();
    func_1();

    // signal to operating system everything works fine
    return 0;
}

void func_1()
{
    int a = 1;
    static int b = 100;
    cout << "a = " <<  a << endl;
    cout << "b = " <<  b << endl;
    a++;
    b++;

}