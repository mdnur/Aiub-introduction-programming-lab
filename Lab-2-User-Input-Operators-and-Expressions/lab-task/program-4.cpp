/** Write a program to check odd or even number 
 * (a) using modulus operator \
 * (b) using bitwise operator 
 * (c) without using bitwise and modulus operator 
 * (d) using conditional operator. 
 * */
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    // check for problem a
    if (num % 2 == 0)
    {
        cout << num << " The number is even( test for A)" << endl;
    }
    else
    {
        cout << num << " The number is odd( test for A)" << endl;
    }
    //check for problem b
    if (!(num & 1))
    {
        cout << num << " The number is even( test for A)" << endl;
    }
    else
    {
        cout << num << " The number is odd( test for B)" << endl;
    }

    //check for problem c
    if (num / 2 * 2 == num)
    {
        cout << num << " The number is even( test for C)" << endl;
    }
    else
    {
        cout << num << " The number is odd( test for C)" << endl;
    }
    //check for problem d
}