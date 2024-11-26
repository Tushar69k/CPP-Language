#include<iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;

    Node(int val) {
        data = val;
        next = NULL;
    }

};

class Queue {
    Node* front;
    Node* rear;

public:

    Queue() {
        front = rear = NULL;
    }

    bool isempty() {
        return (front == NULL && rear == NULL);
    }

    void enqueue(int val) {
        Node* new_node = new Node(val);
        if (isempty()) {
            front = rear = new_node;
        }
        else {
            rear->next = new_node;
            rear = new_node;
        }
    }

    void dequeue() {
        if (isempty()) {
            cout << "Queue is Empty.";
        }
        else {
            Node* temp = front;
            front = front->next;
            temp = NULL;
            free(temp);
        }
    }

    void display() {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};


int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.enqueue(69);
    q.dequeue();
    q.dequeue();
    q.display();



    return 0;
}