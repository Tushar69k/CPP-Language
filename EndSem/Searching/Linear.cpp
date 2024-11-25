#include<iostream>
using namespace std;

int LineraS(int arr[ ] , int size , int ele) {

    for (int i = 0; i < size; i++) {
        if (ele == arr[i]) {
            return i;
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
        cout << "arr [" << (i + 1) << "] : ";
        cin >> arr[i];
    }

    cout << "Enter the element to find: ";
    int ele;
    cin >> ele;

    int temp = LineraS(arr , size , ele);

    if (temp == -1) {
        cout << "ELement Does'nt Exists.";
    }
    else {
        cout << "Element Exists at " << temp << " Index.";
    }



    return 0;
}