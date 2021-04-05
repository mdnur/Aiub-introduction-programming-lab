/** Write a program to input marks of 5 subjects (Physics, Chemistry, Math, English& Biology) for a student. Display
the rank of each subjects and also the result of total marks and percentage obtained with his/her rank in the class.
The rank is categorized as fail (marks < 40%), pass & third division (marks between 40 to 55%), second (marks
between 55 to 65%), first (marks between 65 to 80%), Distinction (marks between 80 to 95%), extra ordinary
(marks above 95 to
100%) */

#include <iostream>
using namespace std;

int main(void)
{
    int phy, chem, math, english, biology, marks;
    float percent;
    cout << "Enter your physics mark: ";
    cin >> phy;

    cout << "Enter your chemistry mark: ";
    cin >> chem;

    cout << "Enter your Math mark: ";
    cin >> math;

    cout << "Enter your Enlgish mark: ";
    cin >> english;

    cout << "Enter your biology mark: ";
    cin >> biology;

    marks = phy + chem + math + english + biology;
    percent = (float)marks / 5.0;

    cout << "You total marks are: " << marks << endl;
    cout << "You percent: " << percent << "%" << endl;

    if (percent >= 95)
    {
        cout << "Division is :extra ordinary" << endl;
    }
    else if (percent >= 80)
    {
        cout << "Division is :Distinction" << endl;
    }
    else if (percent >= 65)
    {
        cout << "Division is :first" << endl;
    }
    else if (percent > 55)
    {
        cout << "Division is :second" << endl;
    }
    else if (percent > 40)
    {
        cout << "Division is :third" << endl;
    }
    else
    {
        cout << "Division is :fail" << endl;
    }

    return 0;
}