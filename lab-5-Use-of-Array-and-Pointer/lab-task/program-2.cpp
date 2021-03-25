/** Write a program to display largest and smallest element of an array defined in Q.No. 1.*/
#include <iostream>
using namespace std;

int main(void)
{
    float number[10];
    float large, small;
    int index = 1;
    for (int i = 0; i < 10; ++i)
    {
        cout << "Number " << index << ": ";
        cin >> number[i];
        index++;
    }
    large = small = number[0];
    for (int i = 0; i < 10; ++i)
    {

        if (large < number[i])
        {
            large = number[i];
        }
        if (small > number[i])
        {
            small = number[i];
        }
    }
    cout << "largest number " << large << endl;
    cout << "smallest number " << small << endl;

    return 0;
}