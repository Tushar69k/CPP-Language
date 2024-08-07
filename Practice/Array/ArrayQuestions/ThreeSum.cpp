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


void ThreeSum(int* arr , int size) {

    int sum;
    cout << "\nEnter the Value of Sum : ";
    cin >> sum;

    cout << "\nTarget Sums are :: " << endl;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    cout << "(" << arr[i] << " , " << arr[j] << " , " << arr[k] << ")" << endl;
                }
            }
        }
    }
}

int main() {

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr , size);
    Getarr(arr , size);
    ThreeSum(arr , size);
    return 0;
}