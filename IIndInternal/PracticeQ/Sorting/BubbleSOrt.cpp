#include<iostream>
using namespace std;

void BubbleSort(int arr[ ] , int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Arr : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " | ";
    }


}


int main() {
    int size;
    cout << "size: ";
    cin >> size;
    int arr[size];

    cout << "elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << " Sorting : ";

    BubbleSort(arr , size);

    return 0;
}