/** Write a program to add, subtract, multiply and divide two integers using user defined type function. */
#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

int factorial(int n);

int main(void)
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}