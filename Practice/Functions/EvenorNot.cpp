#include <iostream>
using namespace std;

bool isEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter an Integer : ";
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even ";
    }
    else
    {
        cout << " Number is odd ";
    }
    // isEven(num);

    return 0;
}