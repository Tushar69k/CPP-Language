#include <iostream>
using namespace std;

int Binary(int arr[], int find, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == find)
        {
            return mid;
        }
        if (arr[mid] > find)
        {
            start = mid + 1;
        }
        if (arr[mid] < find)
        {
            end = mid - 1;
        }
        mid = find;
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;
    int arr[size];

    cout << "Enter the Elements of Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Entered Elements are ::" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "] = " << arr[i] << endl;
    }

    int find;
    cout << "Enter the Element you want to find Index of : ";
    cin >> find;

    cout << "The Index at " << find << " is : " << Binary(arr, find, size);

    return 0;
}