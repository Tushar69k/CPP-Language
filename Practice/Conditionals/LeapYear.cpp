#include <iostream>
using namespace std;


int main()
{
    int year;
    cout << "Enter the Year you have to check : ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "The Year " << year << " is Leap Year ";
    }
    else
    {
        cout << "The Year " << year << " is not a Leap Year";
    }

    return 0;
}
