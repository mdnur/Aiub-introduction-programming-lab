/** Write a program to enter 10 floating numbers in an array and display it */ 
#include <iostream>
using namespace std;

int main(void)
{ 
    float number[10];
    int index =1;
    for (int i =0; i <10 ; ++i)
    {
        cout << "Number " << index << ": ";
        cin >> number[i];
        index++;
    }

    for (int i =0; i < 10; ++i)
    {
        cout << number[i] << endl;
    }

    return 0;
}