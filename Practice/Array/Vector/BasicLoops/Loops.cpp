#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}