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
    cout << " | " << endl;
}

void Find(int *arr, int size)
{
    int Flag = 0;
    int ele;

    cout << "\nEnter the Element you have to Check : ";
    cin >> ele;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            Flag = 1;
        }
    }

    if (Flag == 1)
    {
        cout << "\nElement Exists in Array ! " << endl;
    }
    else if (Flag == 0)
    {
        cout << "\nElement Does'nt Exists in Array ! " << endl;
    }
}

int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr, size);
    Getarr(arr, size);
    Find(arr, size);
    return 0;
}