/** Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm). */
#include <iostream>
using namespace std;

int main()
{
    const float pi = 3.1416;
    int minor =4; 
    int major =6;
    float area = pi * minor * major;
    cout << "The area of an ellipse:" << area << endl;
}