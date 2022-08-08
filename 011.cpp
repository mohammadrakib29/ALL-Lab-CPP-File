/****
    11. C++ program to find all roots of a quadratic equation
    (quadratic equation formula use this one..)//3 5 2

    - b +  root(b^2-4ac) /  2a
    - b -  root(b^2-4ac) /  2a

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d,x1,x2;
    cin >> a >> b >> c;

    d=sqrt(b*b- 4*a*c);

    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    cout << x1 << "\n" << x2;

    return 0;
}




