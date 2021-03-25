/** Write a program to calculate sum of first 50 natural numbers using recursive function. */
#include <iostream>
using namespace std;

int sumOf50numbers(int n){
    if (n != 0)
        return n + sumOf50numbers(n - 1);
    else
        return n;
}

int main(void)
{
    cout << sumOf50numbers(50) << endl;
    return 0;
}