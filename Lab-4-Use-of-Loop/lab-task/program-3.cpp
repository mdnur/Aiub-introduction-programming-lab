/** Write a program to display Fibonacci series of last term up to 300. */
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    long firstnum=0;
    long lastnum=1;
    long nextterm=0;
    cout << "enter a number: ";
    cin >> n;
    for (long i = 0; i<=n;i++){
        if (i == 0){
            cout<<firstnum << ",";
            continue;
        }
        if (i == 1){
            cout<<lastnum << ",";
            continue;
        }
        nextterm = firstnum+nextterm;
        firstnum = lastnum;
        lastnum =nextterm;
        cout<<nextterm << ",";
    }
    return 0;
}