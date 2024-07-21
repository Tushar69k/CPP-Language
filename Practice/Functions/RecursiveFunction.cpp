#include <iostream>
using namespace std;

static int natural(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int res = num + natural(num - 1);
    return res;
}

int main()
{
    int num;

    cout << "Enter Number : ";
    cin >> num;
    int result = natural(num);
    cout << "The sum of natural numbers from " << num << " is : " << result;
    return 0;
}