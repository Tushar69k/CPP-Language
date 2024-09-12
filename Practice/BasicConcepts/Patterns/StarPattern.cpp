#include<iostream>
using namespace std;

int main() {

    cout << "Enter Size : ";
    int size;
    cin >> size;

    cout << "Star Pattern :: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }


    cout << " Reversed Star Pattern ::" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}