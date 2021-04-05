/** Write a template class myCoordinates with two class parameters representing the two coordinates of the
Point. Include public methods to display and set the data values as well as a function that swaps the
values so that, after the swap, the second element is cast into the first and the first is cast into the second.
Also write a main function that creates a Point object and calls the public methods */
#include <iostream>
#include <cstring>
using namespace std;
template <class T>
class Point
{
public:
    T x, y;
    void setX(T x)
    {
        this->x = x;
    }
    void setY(T y)
    {
        this->y = y;
    }
    void swap()
    {
        T temp = this->x;
        x = y;
        y = temp;
         cout << "after swapping the value x,y :" << x << ", " << y <<endl;
    }
    void display()
    {
        cout << "Before swapping the value x,y :" << x << ", " << y <<endl;
    }
};
int main()
{
    Point<int> point;
    point.setX(45);
    point.setY(30);
    point.display();
    point.swap();
    return 0;
}