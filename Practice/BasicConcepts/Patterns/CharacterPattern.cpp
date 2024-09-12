#include<iostream>
using namespace std;

int main() {
    cout << "Enter Size : ";
    int size;
    cin >> size;
    char ch = 'A';

    for (int i = 1; i <= size; i++) {
        for (int J = 1; J <= i; J++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}