/** Write a program to input two integer numbers and display the sum of even numbers between these two input numbers. */
#include<iostream>
using namespace std;

int main(void){
    int firstnum,lastnum;
    int sum = 0;
    cout << "Enter first number:";
    cin >> firstnum;

    cout << "Enter last number:";
    cin >> lastnum;

    for(int i=firstnum; i <=lastnum;++i){
        if(i%2 == 0){
            sum +=i;
        }
    }
    cout << "Sum of of even between " << firstnum << " and " << lastnum << " are: " << sum << endl;
    return 0;
}