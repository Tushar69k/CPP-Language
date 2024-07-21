#include <iostream>
using namespace std;

void SumFor(int size, int sum)
{
    cout << "\n Using For loop :: " << endl;
    for (int i = 1; i <= size; i++)
    {
        sum = sum + i;
    }

    cout << " Sum upto " << size << " Natural numbers is : " << sum << endl;
}

void SumWhile(int size, int sum)
{
    cout << "\n Using While loop :: " << endl;
    int i = 1;
    while (i <= size)
    {
        sum = sum + i;
        i++;
    }

    cout << " Sum upto " << size << " Natural numbers is : " << sum << endl;
}

void SumDo(int size, int sum)
{
    cout << "\n Using Do loop :: " << endl;
    int i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= size);

    cout << " Sum upto " << size << " Natural numbers is : " << sum << endl;
}

int main()
{
    int size;
    int sum = 0;

    cout << " Enter Natural numbers upto you want sum : ";
    cin >> size;
    SumFor(size, sum);
    SumWhile(size, sum);
    SumDo(size, sum);
    return 0;
}