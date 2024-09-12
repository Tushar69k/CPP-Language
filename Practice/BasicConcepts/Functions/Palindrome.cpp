#include <iostream>
using namespace std;

static void Palindrome(int num)
{
    int reverse = 0, rem;
    int flag = 0;
    int temp = num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        reverse = (reverse * 10) + rem;

        if (reverse == temp)
        {
            flag = 1;
        }
    }
    cout << "The reversed number is :  " << reverse;

    if (flag == 1)
    {
        cout << "\nThe no. is Palindrome";
    }
    else
    {
        cout << "\nThe no. is not Palindrome";
    }
}
int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    Palindrome(num);
    return 0;
}