#include <iostream>
using namespace std;


 void table(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << n * i << endl ;
    }
}

int main()
{
    int num;

    cout << "Enter Multiplication Table Number : ";
    cin >> num;
    table(num);
    return 0;
}