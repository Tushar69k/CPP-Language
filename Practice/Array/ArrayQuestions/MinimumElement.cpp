//Question : Program to find Smallest element .
#include<iostream>
using namespace std;

int main() {

    cout << "Enter the length of Array : ";
    int l;
    cin >> l;

    int arr[l];

    cout << "Enter the elements of Array :: " << endl;
    for (int i = 0; i < l; i++) {
        cout << "Element " << (i + 1) << " : ";
        cin >> arr[i];

    }

    cout << "\nArray Elements are :: " << endl;
    for (int i = 0; i < l; i++) {
        cout << "Element " << (i + 1) << " is : " << arr[i] << endl;
    }

    int min = arr[0];

    for (int element : arr) {
        if (element < min) {
            min = element;
        }
    }


    cout << "\nThe Smallest element in Array is : " << min;


    return 0;
}