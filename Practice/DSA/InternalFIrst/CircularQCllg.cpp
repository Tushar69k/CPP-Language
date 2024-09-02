#include<iostream>
using namespace std;

#define MAX_SIZE 100;

class Queue {
    int arr[MAX_SIZE];
    int front , rear , size;

public:
    void enqueue(int value) {
        if (isFull) {
            cout << "Queue is Full " << endl;
        }
    }

    bool isFull() {
        if (rear == (size - 1)) {
            return true;
        }
        else
            return false;
    }

    bool isEmpty() {
        if (front == rear) {
            return true;
        }
        else
            return false;
    }
}

int main() {

}
