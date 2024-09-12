#include <iostream>
using namespace std;

int Sum(int a, int b = 0, int c = 0)
{ // b and c deafault value is initialized 0 .
    return a + b + c;
}

int main()
{
    cout << Sum(2) << endl;
    cout << Sum(2, 2) << endl;
    cout << Sum(2, 2, 2) << endl;
    return 0;
}