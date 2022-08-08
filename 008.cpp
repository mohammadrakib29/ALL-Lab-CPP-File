/****
    08. C++ program to check whether number is even or odd;
*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a%2==0)
    {
        cout << "even";
    }
    else
        cout << "odd";

    return 0;
}
