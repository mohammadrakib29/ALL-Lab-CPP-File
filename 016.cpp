/****
    16. C++ program to input a character and check
    that it's a small letter,capital letter,a digit or a special symbol.

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    char x;
    cin >> x;
    int ch=x;

    if(65<=ch && 90>=ch)
    {
        cout << "capital letter\n";
    }
    else if(97<=ch && 122>=ch)
    {
        cout << "small letter\n" ;
    }


    else
    {
        cout << "  Digit or special symbol\n" ;
    }



    return 0;
}





