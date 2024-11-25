#include<iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int top;
    int size;

public:
    Stack() {
        top = -1;
    }

    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }


    ~Stack() {
        delete[ ] arr;
        arr = NULL;
    }

    void push(int num) {
        if (isfull()) {
            cout << "Stack OverFlow !" << endl;
        }
        else {
            top++;
            arr[top] = num;
        }
    }

    void pop() {
        if (isempty()) {
            cout << "Stack is Empty !" << endl;
        }
        else {
            arr[top] = 0;
            top--;
        }
    }

    bool isempty() {
        if (top == -1) {
            return true;
        }
        else return false;
    }

    bool isfull() {
        if (top == size - 1) {
            return true;
        }
        else return false;
    }

    int peek(int num) {
        if (isempty()) {
            cout << "Stack Underflow !\nNo Element to peek " << endl;
        }
        else {
            return arr[num];
        }
    }

    int count() {
        return top + 1;
    }

    void change(int pos , int ele) {
        arr[pos] = ele;
    }

    void display() {
        if (isempty()) {
            cout << "Stack Underflow ! " << endl;
        }
        for (int i = 0; i <= top; i++) {
            cout << "\n" << peek(i);
        }
    }
};


int main() {
    Stack s(6);
    s.display();
    s.push(8);
    s.push(90);
    s.display();
    s.pop();
    s.push(99);
    s.push(56);
    s.display();








    return 0;
}