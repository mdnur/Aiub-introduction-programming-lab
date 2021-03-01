/** Write a program to swap two variables values with and without using third variables */
#include <iostream>
using namespace std;

int main()
{
    int x ,y ;
    cout << "Enter first number:";
    cin >> x;

    cout << "Enter second number:";
    cin >> y;
    
    cout << "Before The first two number are" << x << " , " << y <<endl;
    x = x + y;
    y = x-y;
    x = x-y;
    cout << "After " << x << y << endl;
}