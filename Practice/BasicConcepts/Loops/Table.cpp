#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number whose Multiplication Table you want : ";
    cin >> num;

    cout << "\n The Multiplication Table for " << num << " is :: " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}
