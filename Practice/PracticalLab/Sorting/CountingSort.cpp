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



void CountingSort(int* arr , int size) {

    int max = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\n\nMAx : " << max << "\n\n";

    int count = 0;

    int arr2[max + 1];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == arr[j]) {
                count = count + 1;
            }
            arr2[i] = count;
        }
        count = 0;
    }




    for (int i = 0; i < max + 1; i++) {
        cout << " | " << arr2[i];
    }
    cout << " | ";




    int j = 0;
    for (int i = 0; i < size + 1; i++) {
        while (arr2[i] > 0) {
            arr[j] = i;
            j++;
            arr2[i]--;
        }
    }



    cout << "\nCounting Sort :: ";
    for (int i = 0; i < size; i++) {
        cout << " | " << arr[i];
    }
    cout << " | ";

}



int main() {

    int size = 8;
    // cout << "Enter Size of Array : ";
    // cin >> size;

    // int arr[size];
    // Setarr(arr , size);
    int arr[8] = { 1 , 1 , 1 , 0 , 2 , 4 , 5 , 6 };
    Getarr(arr , size);
    CountingSort(arr , size);
    return 0;
}