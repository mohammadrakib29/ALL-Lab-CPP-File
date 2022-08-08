/****
    10. C++ program to find the largest number among three numbers

*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,l;
    cin >> a >> b >> c;

    l=(a > b && a > c) ? a : (b > c) ? b : c;

    cout << "largest: " << l;

    return 0;
}














