#include<iostream>
using namespace std;

BinarySearch(int arr[ ] , int size , int find) {
    int start = 0 , end = size - 1 , mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (find == arr[mid]) {
            return mid;
        }
        else if (find < arr[mid]) {
            end = mid - 1;
        }
        else if (find > arr[mid]) {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size , element;
    cout << "Enter Size of Array : ";
    cin >> size;

    // To Get Elements in Array
    int arr[size];
    cout << "Enter Elements in array : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter Element to Search : ";
    cin >> element;

    int index = BinarySearch(arr , size , element);

    if (index != -1) {

        cout << "Element Found at " << index << " Position." << endl;
    }
    else {
        cout << "Element Not Found !" << endl;
    }


    return 0;
}