#include <iostream>
using namespace std;

static void pattern(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
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
}