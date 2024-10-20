#include<iostream>
using namespace std;

int BinaryS(int arr[ ] , int start , int end , int find) {

    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;
    int index;

    if (find == arr[mid]) {
        return mid;
    }
    else if (find < arr[mid]) {
        index = BinaryS(arr , start , mid - 1 , find);
    }
    else if (find > arr[mid]) {
        index = BinaryS(arr , mid + 1 , end , find);
    }

    return index;
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
    int find;
    cin >> find;

    int index = BinaryS(arr , 0 , size - 1 , find);

    if (index != -1) {
        cout << "Ele exists at " << index << " .";
    }
    else {
        cout << "Ele does'nt exists";
    }

    return 0;
}