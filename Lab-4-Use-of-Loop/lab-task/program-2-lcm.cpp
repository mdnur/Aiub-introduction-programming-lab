/** Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers. */
#include <iostream>
using namespace std;

int main(void)
{
    int n1, n2, hcf, temp, lcm;

    cout << "Enter two positive integers: ";
    cin >> n1;
    cout << "Enter two positive integers: ";
    cin >> n2;

    hcf = n1;
    temp = n2;

    while (hcf != temp)
    {
        if (hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;

    cout << "LCM = " << lcm;
    return 0;
}