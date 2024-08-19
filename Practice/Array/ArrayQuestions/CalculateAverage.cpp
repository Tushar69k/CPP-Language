//Question : Calculate the Average marks from an Array containing marks of all students in Physics for each loop .
#include<iostream>
using namespace std;

int main() {
    cout << "Enter the number of students in Class : ";
    int num;
    cin >> num;

    int arr[num];

    cout << "\nEnter the Marks of Students in Physics ( Out of 50 ) :: " << endl;

    for (int i = 0; i < num; i++) {
        cout << "Enter Marks of Student " << (i + 1) << " : ";
        cin >> arr[i];
    }

    cout << "\n" << endl;
    cout << "The Marks of Students are :: " << endl;

    for (int i = 0; i < num; i++) {
        cout << "The Marks of Student " << (i + 1) << " is : " << arr[i] << endl;
    }

    int sum = 0;
    int average = 0;

    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    average = sum / num;

    cout << "\nThe average of Physics Marks in Class of " << num << " Students is : " << average << endl;

    return 0;
}