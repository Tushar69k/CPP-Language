#include <iostream>
using namespace std;

int Setarr(int* arr , int size) {

    cout << "\nEnter Elements of Array :: " << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element [" << (i + 1) << "] : ";
        cin >> arr[i];
    }
    return arr[size];
}

void Getarr(int* arr , int size) {
    cout << "\nElements in Array Are :: \n";
    for (int i = 0; i < size; i++) {
        cout << " | " << arr[i];
    }
    cout << " | ";
}

int main() {

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr , size);
    Getarr(arr , size);


    int max = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

    }
    cout << "\nMax : " << max;


    return 0;
}