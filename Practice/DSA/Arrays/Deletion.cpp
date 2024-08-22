#include<iostream>
using namespace std;

int main() {

    cout << "Enter Size of Array : ";
    int size;
    cin >> size;

    int og = size - 1;

    int arr[og];

    cout << "\nEnter Elemnts of Array :: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i << "] : ";
        cin >> arr[i];
    }

    cout << "\nOur Array is :: " << endl;
    for (int i = 0; i < size; i++) {
        cout << " | " << arr[i];
    }
    cout << " | " << endl;

    int pos;
    cout << "\nEnter Position to Delete element : ";
    cin >> pos;

    for (int i = pos; i <= size; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "\nOur Array after Insertion is :: " << endl;
    for (int i = 0; i < og; i++) {
        cout << " | " << arr[i];
    }
    cout << " | " << endl;


    return 0;
}