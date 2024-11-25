#include<iostream>
using namespace std;

int BinaryS(int arr[ ] , int size , int ele) {

    int start , end , mid;
    start = 0;
    end = size - 1;

    while (start <= end) {

        mid = (start + end) / 2;

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

    cout << "Enter size of Array : ";
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << " ";
        cin >> arr[i];
    }

    cout << "Enter the element to find: ";
    int ele;
    cin >> ele;

    int temp = BinaryS(arr , size , ele);

    if (temp == -1) {
        cout << "ELement Does'nt Exists.";
    }
    else {
        cout << "Element Exists at " << temp << " Index.";
    }

    return 0;
}