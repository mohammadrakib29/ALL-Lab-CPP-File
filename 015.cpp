/****
    15. C++ program to check that a given year is a leap year or not.
    IF not then calculate nearest leap year?

    1200,1600,2000,2400
    2012,2016,2020..2096 ///2013  next leap year 2016

    2100,2200,2300..2025 not leap year because 100 years gap

*/

#include <iostream>

using namespace std;

int main()
{
    while(1)
    {

        int year;
        cout << "Enter your year: ";
        cin >> year;



        if( (year%400==0)|| (year%4==0) && (year%100!=0)  )
        {
            cout << "leap year\n\n";
        }

        else
        {
            cout << "Not leap year\n";

           year++;
           for(;year%4!=0;year++)
        {

        }

        cout << "Nearest leap year " << year << "\n\n";



        }



    }

    return 0;
}

















