/** Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by
4 and divisible by 100 or 400 */
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
     if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}