#include <iostream>
using namespace std;

static void pattern(int num)
{
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
}

int main()
{
    int num;
    cout << "Enter No. for Pattern : ";
    cin >> num;
    pattern(num);
    return 0;
}