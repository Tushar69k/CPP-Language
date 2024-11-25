#include<iostream>
using namespace std;

int BinaryS(int arr[ ] , int start , int end , int ele) {

    if (start > end) {
        return -1;
    }


    int mid;

    mid = (start + end) / 2;

    if (ele == arr[mid]) {
        return mid;
    }

    else if (ele < arr[mid]) {
        BinaryS(arr , start , end = mid - 1 , ele);
    }

    else if (ele > arr[mid]) {
        BinaryS(arr , start = mid + 1 , end , ele);
    }

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

    int start = 0;
    int end = size - 1;

    int temp = BinaryS(arr , start , end , ele);

    if (temp == -1) {
        cout << "ELement Does'nt Exists.";
    }
    else {
        cout << "Element Exists at " << temp << " Index.";
    }

    return 0;
}