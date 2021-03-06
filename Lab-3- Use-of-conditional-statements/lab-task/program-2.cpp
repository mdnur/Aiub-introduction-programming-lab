/** Write a program to check whether input alphabet is vowel or not using if-else and switch statement. */
#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    cout << "Enter an alphabat: ";
    cin >> c;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
        cout << "Error! Non-alphabetic character" << endl;
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";



    cout << "\n";
    //switch
    switch (c)
    {
    case ('a'):
        cout << c << " is vowel";
        break;
    case ('e'):
        cout << c << " is vowel";
        break;
    case ('i'):
        cout << c << " is vowel";
        break;
    case ('o'):
        cout << c << " is vowel";
        break;
    case ('u'):
        cout << c << " is vowel";
        break;
    case ('A'):
        cout << c << " is vowel";
        break;
    case ('E'):
        cout << c << " is vowel";
        break;
    case ('I'):
        cout << c << " is vowel";
        break;
    case ('O'):
        cout << c << " is vowel";
        break;
    case ('U'):
        cout << c << " is vowel";
        break;
    default:
        cout << c << " is consonant" << endl;
    }

    return 0;
}