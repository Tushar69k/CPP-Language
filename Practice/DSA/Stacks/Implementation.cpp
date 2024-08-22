#include<iostream>
using namespace std;

class Stack {
    int* arr;
    int top;
    int size;

public:
    Stack() { //Default Constructor
        top = -1;
    }

    Stack(int s) { //Parameterized  Constructor
        size = s;
        arr = new int[size];
        top = -1;
    }

    ~Stack() { //Destructor
        delete[ ] arr;
        arr = NULL;
    }

    void push(int num);
    void pop();
    int Top();
    bool isEmpty();
    bool isFull();
    int  peek(int num);
    int count();
    void change(int index , int num);
    void display();
    void User();

};


void Stack::push(int num) {
    if (isFull()) {
        cout << "Stack Underflow ! " << endl;
    }
    else {
        top++;
        arr[top] = num;
    }
}


void Stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow ! " << endl;
    }
    else {
        arr[top] = 0;
        top--;
    }
}


int Stack::Top() {
    return arr[top];
}


bool Stack::isEmpty() {
    if (top == -1) {
        return true;
    }
    else return false;
}


bool Stack::isFull() {
    if (top == size - 1) {
        return true;
    }
    else
        return false;
}


int Stack::peek(int num) {
    if (isEmpty()) {
        cout << "Stack Underflow !\nNo Element to peek " << endl;
    }
    else {
        return arr[num];
    }
}


int Stack::count() {
    return top + 1;
}


void Stack::change(int index , int num) {
    arr[index] = num;
}


void Stack::display() {
    if (isEmpty()) {
        cout << "Stack Underflow ! " << endl;
    }
    else {
        cout << endl;
        for (int i = 0; i < size; i++) {
            cout << " | " << peek(i);
        }
        cout << " | " << endl;
    }
}


void Stack::User() {
    cout << "\n0. For User Manual !" << endl;
    cout << "1. Push : Add Elements in Stack" << endl;
    cout << "2. Pop : Remove Top most Element in Stack" << endl;
    cout << "3. Top : Top Element in Stack" << endl;
    cout << "4. isempty : To check Stack is empty or not" << endl;
    cout << "5. isfull : To check Stack is full or not" << endl;
    cout << "6. peek : To check particular element of given index" << endl;
    cout << "7. count : To check Number of elements in Stack" << endl;
    cout << "8. change : To change a element at particular index" << endl;
    cout << "9. display : To display all elements in Stack" << endl;
    cout << "10. Exit Program!" << endl;
}


int main() {
    int index , num , size;

    int choice = 0;

    cout << "\nProgram for Implementation of Stack using Arrays ::" << endl;

    cout << "\nEnter Size of Stack : ";
    cin >> size;

    Stack s(size);

    cout << "\n0. For User Manual !" << endl;
    cout << "1. Push : Add Elements in Stack" << endl;
    cout << "2. Pop : Remove Top most Element in Stack" << endl;
    cout << "3. Top : Top Element in Stack" << endl;
    cout << "4. isempty : To check Stack is empty or not" << endl;
    cout << "5. isfull : To check Stack is full or not" << endl;
    cout << "6. peek : To check particular element of given index" << endl;
    cout << "7. count : To check Number of elements in Stack" << endl;
    cout << "8. change : To change a element at particular index" << endl;
    cout << "9. display : To display all elements in Stack" << endl;
    cout << "10. Exit Program!" << endl;

    do {

        cout << "\nEnter your Choice : ";
        cin >> choice;

        switch (choice) {

            case 0: {
                s.User();
                break;
            }

            case 1: {
                cout << "\nPush : Add Elements in Stack" << endl;
                cout << "Enter Element to Push : ";
                cin >> num;
                s.push(num);
                break;
            }

            case 2: {
                cout << "Pop : Remove Top most Element in Stack" << endl;
                s.pop();
                break;
            }

            case 3: {
                cout << "Top : Top Element in Stack" << endl;
                cout << "Top most ELement in Stack is : " << s.Top() << endl;
                break;
            }

            case 4: {
                cout << "isempty : To check Stack is empty or not" << endl;
                if (s.isEmpty()) {
                    cout << "Stack is Empty ." << endl;
                }
                else cout << "Stack is Not Empty ." << endl;
                break;

            }

            case 5: {
                cout << "isfull : To check Stack is full or not" << endl;
                if (s.isFull()) {
                    cout << "Stack is Full ." << endl;
                }
                else cout << "Stack is Not Full ." << endl;
                break;
            }

            case 6: {
                cout << "peek : To check particular element of given index" << endl;
                cout << "Enter index : ";
                cin >> index;
                s.peek(index);
                break;
            }

            case 7: {
                cout << "count : To check Number of elements in Stack" << endl;
                cout << "Number of ELemnts in Stack is : " << s.count() << endl;
                break;
            }

            case 8: {
                cout << "change : To change a element at particular index" << endl;
                cout << "Enter Index : ";
                cin >> index;
                cout << "Enter Number : ";
                cin >> num;
                s.change(index , num);
                break;
            }

            case 9: {
                cout << "display : To display all elements in Stack" << endl;
                s.display();
                break;
            }

            case 10: {
                cout << "Exiting Prog." << endl;
                break;
            }


            default:
                cout << "Chal Chal ke DIkha !";
                break;
        }
    } while (choice != 10);

    return 0;
}