/** Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers. */
#include <iostream>
using namespace std;

int main(void)
{
    int n1, n2;

    cout << "Enter two positive integers: ";
    cin >> n1;
    cout << "Enter two positive integers: ";
    cin >> n2;

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    cout << "GCD = " << n1;
    return 0;
}