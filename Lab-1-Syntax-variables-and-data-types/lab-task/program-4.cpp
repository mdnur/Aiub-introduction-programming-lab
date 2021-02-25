/** Write a program to calculate area of a circle having its radius (r=5). */
#include<iostream>
using namespace std;

int main()
{
    const float pi= 3.1416;
    int r = 5 ; // r -> radius
    float area = pi *r*r; // formula of circle area is pi*radius^2;
    cout << "The area of an ellipse:" << area << endl;
}