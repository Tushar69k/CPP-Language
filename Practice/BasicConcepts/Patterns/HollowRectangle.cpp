#include<iostream>
using namespace std;

void Pattern(int rows , int columns) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter no. of Rows : ";
    int rows;
    cin >> rows;
    cout << "Enter no. of Columns : ";
    int columns;
    cin >> columns;
    cout << "Your Hollow Rectangle of " << rows << " Rows & " << columns << " Columns are :: " << endl;
    Pattern(rows , columns);
    return 0;
}