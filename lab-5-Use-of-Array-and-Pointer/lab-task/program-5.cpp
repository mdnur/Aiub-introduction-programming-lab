/** Write a program to swap value of two variables using pointer.*/
#include <iostream>
using namespace std;

int main(void)
{
    int x, y, *a, *b, temp;

    cout << "Enter the value of x and y: ";
    cin >> x >> y;

    cout << "Before swapping x: " << x << " y:" << y << endl;

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    cout << "After swapping x: " << x << " y:" << y << endl;
    return 0;
}