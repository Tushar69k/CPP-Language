#include<iostream>
using namespace std;

int Binary(int arr[ ] , int size , int ele) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (ele == arr[mid]) {
            return mid;
        }
        else if (ele < arr[mid]) {
            end = mid - 1;
        }
        else if (ele > arr[mid]) {
            start = mid + 1;
        }
    }
    return -1;
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

    cout << " find element : ";
    int ele;
    cin >> ele;

    int index = Binary(arr , size , ele);

    if (index != -1) {
        cout << "Ele exists at " << index << " .";
    }
    else {
        cout << "Ele does'nt exists";
    }

    return 0;
}