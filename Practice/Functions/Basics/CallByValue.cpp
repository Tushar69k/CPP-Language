#include <iostream>
using namespace std;

void ChangeValue(int z)
{
    z = 69;
}

int main()
{
    int a = 5;
    ChangeValue(a);
    cout << a;
    return 0;
}