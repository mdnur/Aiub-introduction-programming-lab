/** Constructor and Destructor 
 * 
1. Develop a Class named as ShapeAreaCalc.
2. Declare private integer member data as follows:
length, width, rad.
3. Write public empty Constructor then write constructor with parameters.
a. ShapeAreaCalc()
b. ShapeAreaCalc(int l, int w, int r)
4. Write the following methods
a. void getparameter()
This method will take input from the user. The user should be able to choose between Rectangle and
Circle (For Example: 1 = rectangle, 2 = circle).
b. int RectArea()
This method will return the area of a rectangle (length * breadth)
c. float CircArea()
This method will return area of a circle (3.1416*rad*rad)
d. void DsiplayRectArea()
e. void DisplayCircArea()
5. Create two objects as follows:
a. Obj1
b. Obj2
6. Calculate both rectangle and circle area using RectArea() and CircArea()
methods
7. Display area of rectangle and circle using DisplayRectArea() and
DisplayCircArea() methods
 * 
 * 
*/
#include <iostream>
using namespace std;
class ShapeAreaCalc
{
private:
    int length;
    int width;
    int rad;

public:
    ShapeAreaCalc()
    {
    }
    ShapeAreaCalc(int l, int w, int r)
    {
        this->length = l;
        this->width = w;
        this->rad = r;
    }
    void getparameter() //This method will take input from the user. The user should be able to choose between Rectangle and Circle (For Example: 1 = rectangle, 2 = circle).
    {
        short option;
        cout << "Enter 1 for Rectangle Area 2 for Circle Area: ";
        cin >> option;
        if (option == 1)
        {
            cout << "Enter length and width : ";
            cin >> this->length >> this->width;
            this->RectArea();
            this->DisplayRectArea();
        }else if (option == 2)
        {
            cout << "Enter radias : ";
            cin >> this->rad ;
            this->CircArea();
            this->DisplayCircArea();
        }else{
            cout << "Try again with valid input" << endl;
        }
    }
    int RectArea()
    {
        return this->length * this->width;
    }
    float CircArea()
    {
        return 3.1416 * this->rad * this->rad;
    }
    void DisplayRectArea()
    {
        cout << "The Rect Area is :" << this->RectArea() << endl;
    }
    void DisplayCircArea()
    {
        cout << "The Circle Area is :" << this->CircArea() << endl;
    }
};

int main()
{
    ShapeAreaCalc obj1;
    obj1.getparameter();
    
    ShapeAreaCalc obj2;
    obj2.getparameter();
    
    return 0;
}