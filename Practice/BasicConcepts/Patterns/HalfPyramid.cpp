#include<iostream>
using namespace std;

int main() {
    cout << "Enter Size : ";
    int size;
    cin >> size;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}