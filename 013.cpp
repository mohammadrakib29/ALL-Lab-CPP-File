/****
    13. C++ program to input a number. if the number is even print
    it's square otherwise print it's cube;
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a%2==0)
    {
        cout << "even\n";
        cout << "Square is: " << a*a << "\n";
    }
    else
    {
         cout << "odd\n";
        cout << a*a*a << "\n";
    }


    return 0;
}






