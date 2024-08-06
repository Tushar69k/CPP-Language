#include <iostream>
using namespace std;

int Setarr(int *arr, int size)
{

    cout << "\nEnter Elements of Array :: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << (i + 1) << "] : ";
        cin >> arr[i];
    }
    return arr[size];
}

void Getarr(int *arr, int size)
{
    cout << "\nElements in Array Are :: \n";
    for (int i = 0; i < size; i++)
    {
        cout << " | " << arr[i];
    }
    cout << " | " << endl  ;
}

void Sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "\nThe total Sum of Elements in Array is : " << sum << endl;
}

int main()
{

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr, size);
    Getarr(arr, size);
    Sum(arr, size);
    return 0;
}