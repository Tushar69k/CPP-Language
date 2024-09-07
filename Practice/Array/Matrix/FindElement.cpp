#include<iostream>
using namespace std;


int main() {

    int[ ][ ] Matrix = SetMatrix();
    GetMatrix(Matrix);
    Find(Matrix);
    return 0;
}

int[ ][ ] SetMatrix() {

    cout << " Enter No. of Rows : " << endl;
    int rows;
    cin >> rows;
    cout << " Enter No. of Columns : " << endl;
    int columns;
    cin >> columns;

    int[ ][ ] Matrix = new int[rows][columns];

    cout << "\nEnter Elements for Matrix (" << rows << " X " << columns << ") " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Element ( " << (i + 1) << " , " << (j + 1) << " ) : " << endl;
            cin >> Matrix[i][j];
        }
    }
    return Matrix;
}

void GetMatrix(int[ ][ ] Matrix) {
    cout << "\nElements in Matrix Are :: " << endl;
    for (int i = 0; i < Matrix.length; i++) {
        cout << " |  ";
        for (int j = 0; j < Matrix[0].length; j++) {
            cout << Matrix[i][j] << "  ";
        }
        cout << "| ";
        cout << endl;
    }
}

void Find(int[ ][ ] Matrix) {

    int flag = 0;
    cout << "Enter Element you want to find : ";
    int element;
    cin >> element;

    int row = 0 , column = 0;

    for (int i = 0; i < Matrix.length; i++) {
        for (int j = 0; j < Matrix[0].length; j++) {
            if (element == Matrix[i][j]) {
                cout << "Element exists at Cell (" << (i + 1) << " , " << (j + 1) << ") \n" << endl;
            }
        }
    }
}
