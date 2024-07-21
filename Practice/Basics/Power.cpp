/* Question : Write a program to find x to the power n (i.e., x^n). Take x and n from the user. You need to print the
answer. */
#include <iostream>
using namespace std;

int main()
{
    int num, power;

    cout << "Program to Calculate Square  :: " << endl;

    cout << "Enter number : ";
    cin >> num;

    cout << "Enter Power of number : ";
    cin >> power;
    int ans = 1;

    if (power == 0)
    {
        cout << "Power of " << num << " at " << power << " is : " << ans;
    }
    else
    {
        for (int i = 1; i <= power; i++)
        {
            ans = ans * num;
        }
        cout << "Power of " << num << " at " << power << " is : " << ans;
    }
    return 0;
}
