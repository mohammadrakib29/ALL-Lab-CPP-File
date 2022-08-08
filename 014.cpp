/****
    14. C++ program to input marks in three subject of a student and
    calculate the division according to the following conditions
    >=60  First
    50-59 Second
    40-49 third
    <40   fail

**/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float marks,sub1,sub2,sub3;
    cin >> sub1 >> sub2 >> sub3;
    marks= ((sub1+sub2+sub3)/3);

    if(marks>=60)
    {
        cout << "First";
    }
    else if(marks>=50)
    {
        cout << "Second";
    }
    else if(marks>=40)
    {
        cout << "Third";
    }
    else
    {
        cout << "Fail";
    }


    return 0;
}












