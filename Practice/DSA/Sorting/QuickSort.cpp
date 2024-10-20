#include<iostream>
using namespace std;

void Swap(int arr[ ] , int i , int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int Partition(int arr[ ] , int l , int r) {

    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            Swap(arr , i , j);
        }
    }
    Swap(arr , i + 1 , r);
    return i + 1;
}


void QuickSort(int arr[ ] , int l , int r) {

    if (l < r) {
        int pi = Partition(arr , l , r);
        QuickSort(arr , l , pi - 1);
        QuickSort(arr , pi + 1 , r);
    }

}


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

int main() {

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];
    Setarr(arr , size);
    Getarr(arr , size);

    QuickSort(arr , 0 , size - 1);
    cout << "After Quick Sort :: ";
    Getarr(arr , size);



    return 0;
}