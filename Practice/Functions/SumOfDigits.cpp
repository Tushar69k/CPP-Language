#include <iostream>
using namespace std;

static int Sum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num;

    cout << "Enter Number : ";
    cin >> num;

    cout << "The sum of Digits of no. " << num << " is : " << Sum(num);
    return 0;
}
