/** Write a program to find the sum of all the elements of an array using pointers.*/
#include <iostream>
using namespace std;

int main(void)
{
    float number[10];
    float *p_number;
    float sum;
    int n;
    int index = 1;
    cout << "How many number you want to store: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Number " << index << ": ";
        cin >> number[i];
        index++;
    }
    p_number = number;
    for (int i = 0; i < n; i++)
    {
        sum += (*p_number);
        p_number++;
    }
    cout << sum << endl;

    return 0;
}