#include<iostream>
using namespace std;

class Array {
private:
    int size;
    int* arr;
public:
    Array(int x) { // Parameterized Constructor
        size = x;
        arr = new int[size];
    }

    ~Array() { // Destructor
        delete[ ]arr;
        arr = NULL;
    }

    void Setarr();
    void Getarr();
    int MaxElement();
    int MinElement();
    int SearchElement(int element);
    void DeleteElement(int index);
    void InsertElement(int index , int element);
    void User();
};

void Array::Setarr() { // To Initialize an Array 
    cout << "\nEnter Elements of Array :: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element [" << (i + 1) << "] : ";
        cin >> arr[i];
    }
}


void Array::Getarr() { // To Show Elements of Array 
    cout << "\nElements in Array Are :: \n";
    for (int i = 0; i < size; i++) {
        cout << " | " << arr[i];
    }
    cout << " | " << endl;
}


int Array::MaxElement() { // To Find Maximum Element of Array 
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int Array::MinElement() { // To Find Miinimum Element of Array 
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int Array::SearchElement(int ele) { // To Search an Element from Array 
    for (int i = 0; i < size; i++) {
        if (ele == arr[i]) {
            return i;
        }
    }
    return -1;
}

void Array::DeleteElement(int index) { // To Delete element at given Index 
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void Array::InsertElement(int index , int element) { // To Insert Element at Given Index
    size++; // To increase size of array for insertion of new element

    for (int i = size - 1; i > index - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

void Array::User() {
    cout << "\n0. For User Manual !" << endl;
    cout << "1. Show Elements of Array" << endl;
    cout << "2. Find Minimum Element of Array" << endl;
    cout << "3. Find Maximum Element of Array" << endl;
    cout << "4. Insert Element into Array" << endl;
    cout << "5. Delete Element from Array" << endl;
    cout << "6. Search Element from Array" << endl;
    cout << "7. Exit Program" << endl << endl;
}

int main() {
    int choice1 = 0;
    int index;
    int element;

    cout << "Menu Driven Program for Operations on Array : " << endl;

    int size;
    cout << "\nEnter Size of Array : ";
    cin >> size;

    Array tush(size);

    tush.Setarr();


    cout << "\n0. For User Manual !" << endl;
    cout << "1. Show Elements of Array" << endl;
    cout << "2. Find Minimum Element of Array" << endl;
    cout << "3. Find Maximum Element of Array" << endl;
    cout << "4. Insert Element into Array" << endl;
    cout << "5. Delete Element from Array" << endl;
    cout << "6. Search Element from Array" << endl;
    cout << "7. Exit Program" << endl << endl;

    do {
        cout << "\nEnter Your Choice : ";
        cin >> choice1;
        cout << endl;

        switch (choice1) {

            case 0: {
                tush.User();
                break;
            }


            case 1: {
                cout << "1. Show Elements of Array : " << endl;
                tush.Getarr();

                break;
            }

            case 2: {
                cout << "2. Find Minimum Element of Array : " << endl;
                cout << "Minimum Element of Array = ";
                cout << tush.MinElement() << endl;
                break;
            }

            case 3: {
                cout << "3. Find Maximum Element of Array : " << endl;
                cout << "Maximum Element of Array = ";
                cout << tush.MaxElement() << endl;
                break;
            }

            case 4: {
                cout << "4. Insert Element into Array : " << endl;
                cout << "Array Before Inserion : " << endl;
                tush.Getarr();
                cout << "Enter Index to Insert Element in Array : ";
                cin >> index;
                cout << "Enter Element to Insert at " << index << " in Array : ";
                cin >> element;
                tush.InsertElement(index , element);

                cout << "Array After Insertion : " << endl;
                tush.Getarr();
                break;
            }

            case 5: {
                cout << "5. Delete Element from Array : " << endl;
                cout << "Array Before Deletion : " << endl;
                tush.Getarr();
                cout << "Enter Index of Element to Delete : ";
                cin >> index;
                tush.DeleteElement(index);

                cout << "Array After Deletion : " << endl;
                tush.Getarr();
                break;
            }

            case 6: {
                cout << "6. Search Element from Array : " << endl;
                cout << "Enter Element to Find in Array : ";
                cin >> element;
                if (tush.SearchElement(element) == -1) {
                    cout << "Element Not Present in Array ." << endl;
                }
                else {
                    cout << "Element Present in Array at Index = " << tush.SearchElement(element) << "." << endl;
                }
                break;
            }

            case 7: {
                cout << "Exiting Program !" << endl;
                break;
            }

            default: {
                cout << "Invalid Choice !" << endl;
            }
        }
    } while (choice1 != 7);

    return 0;
}