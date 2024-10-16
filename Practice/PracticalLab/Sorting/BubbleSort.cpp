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
    cout << " | " << endl;
}

void  BubbleSort(int* arr , int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nBubble Sort :: \n";
    for (int i = 0; i < size; i++) {
        cout << " | " << arr[i];
    }
    cout << " | " << endl;
}


int main() {

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr , size);
    Getarr(arr , size);
    BubbleSort(arr , size);
    return 0;
}