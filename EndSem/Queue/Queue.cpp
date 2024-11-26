#include<iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int size;
    int front , rear;

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

    void enqueu(int ele) {
        if (isempty()) {
            front = rear = 0;
            arr[rear] = ele;
        }
        else if (isfull()) {
            cout << "Queue is Full ! " << endl;
        }
        else {
            rear++;
            arr[rear] = ele;
        }
    }


    void dequeue() {
        if (isempty()) {
            cout << "Queue is Empty! " << endl;
        }
        else if (front == rear) {
            front = rear = -1;
        }
        else {
            // arr[front] = 0;
            front++;
        }
    }

    bool isempty() {
        return (front == -1 && rear == -1);
    }

    bool isfull() {
        return (rear == size - 1);
    }

    void display() {
        for (int i = front; i <= rear; i++) {
            cout << " | " << arr[i];
        }

    }

};

int main() {

    Queue q(5);
    q.enqueu(1);
    q.dequeue();
    q.enqueu(2);
    q.enqueu(3);
    q.enqueu(4);
    q.enqueu(5);
    q.display();


    return 0;
}