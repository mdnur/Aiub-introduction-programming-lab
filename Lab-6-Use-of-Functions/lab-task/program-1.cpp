/** Write a program to add, subtract, multiply and divide two integers using user defined type function. */
#include <iostream>
using namespace std;

int add(int x, int y)
{
    int result = x + y;
    return result;
}
int sub(int x, int y)
{
    int result = x - y;
    return result;
}
int mult(int x, int y)
{
    int result = x * y;
    return result;
}
int divide(int x, int y)
{
    int result = x / y;
    return result;
}
int main(void)
{
    int x, y;
    cout << "Enter you two number:";
    cin >> x >> y;
    cout << add(x, y) << endl;
    cout << sub(x, y) << endl;
    cout << mult(x, y) << endl;
    cout << divide(x, y) << endl;
    return 0;
}