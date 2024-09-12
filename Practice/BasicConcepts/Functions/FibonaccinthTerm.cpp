#include <iostream>
using namespace std;

static void FibonacciSeries(int count)
{
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;

    if (count == 1 || count == 2)
    {
        cout << n2;
        return;
    }

    if (count == 0)
    {
        cout << n1;
    }

    for (int i = 1; i < count; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    cout << " " << n3;
}

int main()
{
    int num;
    cout << "Enter nth Term : ";
    cin >> num;
    cout << "Fibonacci Series at " << num << " th term is ::";
    FibonacciSeries(num);
    return 0;
}