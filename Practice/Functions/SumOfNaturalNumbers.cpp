#include <iostream>
using namespace std;

int sum(int num)
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result = result + i;
    }
    return result;
}

int main()
{
    int number;
    cout << "Enter Number : ";
    cin >> number;
    int Finale = sum(number);
    cout << Finale;

    return 0;
}