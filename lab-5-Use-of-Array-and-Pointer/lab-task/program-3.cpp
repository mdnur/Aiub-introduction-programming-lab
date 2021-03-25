/** Write a program to find biggest among three numbers using pointer.  */
#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    int *x, *y, *z;
    cin >> a >> b >> c;

    x = &a;
    y = &b;
    z = &c;

    if (*x >= *y && *x >= *z)
    {
        cout << "largest Number:" << *x << endl;
    }
    else
    {
        if (*y >= *x && *y >= *z)
        {
            cout << "largest Number:" << *y << endl;
        }
        else
        {
            cout << "largest Number:" << *z << endl;
        }
    }
    return 0;
}