#include<iostream>
using namespace std;

int Linear(int arr[ ] , int size , int ele) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == ele) {
            return i;
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

    int index = Linear(arr , size , ele);

    if (index != -1) {
        cout << "Ele exists at " << index << " .";
    }
    else {
        cout << "Ele does'nt exists";
    }

    return 0;
}