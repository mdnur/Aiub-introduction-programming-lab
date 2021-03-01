/** Print the value of y for given x=2 & z=4 and analyze the output.
a. y = x++ + ++x;
b. y= ++x + ++x;
c. y= ++x + ++x + ++x;
d. y = x>z;
e. y= x>z? x:z;
f. y = x&z; 
g. y= x>>2 + z<<1;
*/

/**
#include<iostream>
using namespace std;

int main()
{
    int x = 2;
    int z =4;
    // probelm a
    int y = x++ + ++x;
    cout << "For the problem a" <<  y << endl; // ans y = 6  a6
    // problem b 
    y = ++x + ++x; // y = 11 b12
    cout << "For the problem b" <<  y << endl;  
    // problem c
    y = ++x + ++x + ++x; // y =24 c25
    cout << "For the problem c" <<  y << endl;  
    // problem d
    y = x>z; // y = 1 d1
    cout << "For the problem d" <<  y << endl;
    // problem e
    y= x>z? x:z; //y =9 e9
    cout << "For the problem e" <<  y << endl;
    // problem f 
    y= x&z; //e0
    cout << "For the problem e" <<  y << endl;
    // problem f
    y= x>>2 + z<<1; //e0
    cout << "For the problem e" <<  y << endl;
    
}

*/