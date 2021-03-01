/** Write a program to prompt the user to input 3 integer values and print these values in forward and
reversed order. */
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter three number:";
    cin >> x >> y >> z;
    cout << "You numbers are:" << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << "You numbers are in reverse order:" << endl;
    cout << z << endl;
    cout << y << endl;
    cout << x << endl;
}