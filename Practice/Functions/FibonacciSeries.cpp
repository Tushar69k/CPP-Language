#include <iostream>
using namespace std;

static void FibonacciSeries(int count)
{
    int n1 = 0;
    int n2 = 1;
    int n3;

    cout << n1 + " " + n2;
    if (count == 1)
    {
        cout << n1;
        return;
    }

    for (int i = 2; i <= count; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << " " << n3;
    }
}

int main()
{

    int num;
    cout << "Enter Count : ";
    cin >> num;
    cout << "Fibonacci Series Upto " << num << " is :: "  << endl;
    FibonacciSeries(num);
    return 0;
}