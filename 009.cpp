/****
    09. C++ program to check vowel or Consonant
*/
#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        char x;
    cin >> x;
    switch(x)
    {
    case('a'):
    case('e'):
    case('i'):
    case('o'):
    case('u'):
    case('A'):
    case('E'):
    case('I'):
    case('O'):
    case('U'):
        cout << "vowel\n";
        break;

    default:
        cout << "Consonant\n";
        break;

    }
    }


    return 0;
}





