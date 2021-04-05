/** Write a program to find the largest and smallest among three entered numbers by the user and also
display whether the identified largest/smallest number is even or odd */
#include <iostream>
using namespace std;

bool checkEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n1, n2, n3, smallest, largest;

    //taking input from the command line (user) all at once
    cout << "Enter the three numbers : ";
    cin >> n1 >> n2 >> n3;

    //assign initial value for comparison (as the undefined variables store a random value)
    smallest = n1;
    largest = n2;

    //logic to find the Smallest and the Largest number - Remember, each variable stores only the latest value inserted into it.
    if (n2 < smallest)
    {
        smallest = n2;
    }

    if (n3 < smallest)
    {
        smallest = n3;
    }
    if (n3 > largest)
    {
        largest = n3;
    }

    if (n2 > largest)
    {
        largest = n2;
    }

    if (smallest % 2 == 0)
    {
        cout << smallest << " is even number and smallest" << endl;
    }
    else
    {
        cout << smallest << " is odd number and smallest" << endl;
    }

    if (largest % 2 == 0)
    {
        cout << largest << " is even number and largest" << endl;
    }
    else
    {
        cout << largest << " is odd number and largest" << endl;
    }

    return 0;
}