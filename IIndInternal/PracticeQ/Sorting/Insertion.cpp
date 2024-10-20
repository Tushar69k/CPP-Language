#include <iostream>
using namespace std;

void Setarr(int arr[] , int size) {

    cout << "\nEnter Elements of Array :: " << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element [" << (i + 1) << "] : ";
        cin >> arr[i];
    }
}

void Getarr(int arr[] , int size) {
    cout << "\nElements in Array Are :: \n";
    for (int i = 0; i < size; i++) {
        cout << " | " << arr[i];
    }
    cout << " | " << endl;
}

void InsertionSort(int arr[ ] , int size) {
    for (int i = 1; i < size; i++) {
        int value = arr[i];
        int index = i;
        while (index > 0 && arr[index - 1] > value) {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}


int main() {

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr , size);
    Getarr(arr , size);
    InsertionSort(arr , size);
    Getarr(arr , size);
    return 0;
}
 