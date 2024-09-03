// Question : Write a prograam to Accept an Array and insert an element at a given Position.
#include<iostream>
using namespace std;

int main() {

    cout << "Enter Size of Array : ";
    int size;
    cin >> size;

    int og = size + 1;

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
    cout << "\nEnter Position to insert element : ";
    cin >> pos;

    int val;
    cout << "Enter Value to insert : ";
    cin >> val;

    for (int i = size; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;

    cout << "\nOur Array after Insertion is :: " << endl;
    for (int i = 0; i < og; i++) {
        cout << " | " << arr[i];
    }
    cout << " | " << endl;

    return 0;
}