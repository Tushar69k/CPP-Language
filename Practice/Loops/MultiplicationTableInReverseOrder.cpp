#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number whose Multiplication Table you want : ";
    cin >> num;

    cout << "\nThe Multiplication Table for " << num << " is ::" << endl;

    for (int i = 10; i >= 1; i--)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}
