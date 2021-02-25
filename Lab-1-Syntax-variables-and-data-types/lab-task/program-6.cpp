/** Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I = P*T*R/100). */
#include <iostream>
using namespace std;

int main()
{
    int p = 4000;
    int T=2;
    float R=5.5;
    float interest = p*T*(R/100);
    cout << "The interest :" << interest << endl;
}