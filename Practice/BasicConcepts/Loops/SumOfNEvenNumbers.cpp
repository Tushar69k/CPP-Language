#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter number upto which you want sum of Even numbers : ";
    cin >> num;
    int sum = 0;

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    cout << "The sum of Even numbers upto " << num << " is : " << sum;

    return 0;
}
