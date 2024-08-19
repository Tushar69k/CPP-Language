#include<iostream>
using namespace std;

int main() {

    int arr1[2][3];
    int arr2[2][3];
    int sum[2][3];

    cout << "Enter the element of 1st Matrix : ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }


    cout << "Enter the element of 2nd Matrix : ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }


    cout << "\nThe element of 1st Matrix are  : " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr1[i][j];
            cout << " ";
        }
        cout << "\n";
    }

    cout << "\nThe element of 2nd Matrix are  : " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j];
            cout << " ";
        }
        cout << "\n";
    }

    cout << "\nThe sum of both Matrix is : " << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j];
            cout << " ";
        }
        cout << "\n";
    }


    return 0;
}

