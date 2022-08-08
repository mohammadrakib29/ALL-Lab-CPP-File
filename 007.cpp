/****
    08. C++ program to swap to number;
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cin >> a >> b;

    cout << "before swapping \n" ;
    cout << "a=" << a  << " b=" << b;

    temp=a;
    a=b;
    b=temp;

   cout << "\nAfter swapping \n" ;
   cout << "a=" << a  << " b=" << b;

    return 0;
}





