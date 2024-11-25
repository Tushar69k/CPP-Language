#include<iostream>
using namespace std;

void BubbleSort(int arr[ ] , int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size - 1 - i; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int k = 0; k < size; k++) {
        cout << " | " << arr[k];
    }cout << " |";


}



int main() {
    cout << "Enter size of Array : ";
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << " ";
        cin >> arr[i];
    }

    BubbleSort(arr , size);

    return 0;
}