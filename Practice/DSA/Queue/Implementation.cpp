#include<iostream>
using namespace std;

class Queue {
    int* arr;
    int size;
    int front , rear;

public:

    Queue() { }

    Queue(int s) {


        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[ ] arr;
        arr = NULL;
    }

    void User();
    void enqueue(int value);
    void dequeue();
    int isEmpty();
    int isFull();
    void display();

};

void Queue::User() {
    cout << "\n0. For User Manual !" << endl;
    cout << "1. enqueue() : To add element at end of the Queue." << endl;
    cout << "2. dequeue() : To Remove Front Element in Queue." << endl;
    cout << "3. isEmpty() : To check whwther a Queue is Empty or not." << endl;
    cout << "4. isFull() : To check whwther a Queue is Full or not." << endl;
    cout << "5. display : To display all elements in Queue" << endl;
    cout << "6. Exit Program!" << endl;

}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is Full !" << endl;
    }
    else if (isEmpty()) {
        front = rear = 0;
        arr[rear] = value;
    }
    else {
        rear++;
        arr[rear] = value;
    }

}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is Empty! " << endl;
    }
    else if (front == rear) {
        front = rear = -1;
    }
    else {
        size++;
        front++;
    }
}

int Queue::isEmpty() {
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

int Queue::isFull() {
    if (rear == size - 1) {
        return true;
    }
    else
        return false;
}

void Queue::display() {
    if (isEmpty()) {
        cout << "Queue Underflow ! " << endl;
    }
    else {
        cout << endl;
        for (int i = front; i <= rear; i++) {
            cout << " | " << arr[i];
        }
        cout << " | " << endl;
    }
}



int main() {
    int num;
    int size;
    int choice = 0;

    cout << "\nProgram for Implementation of Queue using Arrays ::" << endl;

    cout << "\nEnter Size of Queue : ";
    cin >> size;

    Queue s(size);

    cout << "\n0. For User Manual !" << endl;
    cout << "1. enqueue() : To add element at end of the Queue." << endl;
    cout << "2. dequeue() : To Remove Front Element in Queue." << endl;
    cout << "3. isEmpty() : To check whwther a Queue is Empty or not." << endl;
    cout << "4. isFull() : To check whwther a Queue is Full or not." << endl;
    cout << "5. display : To display all elements in Queue" << endl;
    cout << "6. Exit Program!" << endl;


    do {

        cout << "\nEnter your Choice : ";
        cin >> choice;

        switch (choice) {

            case 0: {
                s.User();
                break;
            }

            case 1: {
                cout << "\nenqueue() : To add element at end of the Queue." << endl;
                cout << "Enter Element to add : ";
                cin >> num;
                s.enqueue(num);
                break;
            }

            case 2: {
                cout << "\ndequeue() : To Remove Front Element in Queue." << endl;
                s.dequeue();
                break;
            }

            case 3: {
                cout << "\nisEmpty() : To check Queue is empty or not" << endl;
                if (s.isEmpty()) {
                    cout << "Queue is Empty ." << endl;
                }
                else cout << "Queue is Not Empty ." << endl;
                break;

            }

            case 4: {
                cout << "\nisFull() : To check Queue is full or not" << endl;
                if (s.isFull()) {
                    cout << "Queue is Full ." << endl;
                }
                else cout << "Queue is Not Full ." << endl;
                break;
            }



            case 5: {
                cout << "\ndisplay() : To display all elements in Queue" << endl;
                s.display();
                break;
            }


            case 6: {
                cout << "\nExiting Prog." << endl;
                break;
            }


            default:
                cout << "\nChal Chal ke DIkha !";
                break;
        }
    } while (choice != 6);

    return 0;
}