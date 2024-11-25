Stack using Linked List : -
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node() {
        count++;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data , Node* n) {
        this->data = data;
        this->next = n;
    }

    ~Node() {
        count--;
    }
};

int Node::count = 0;

class Stack {
private:
    Node* top;
    Stack() {
        top = NULL;
    }

public:
    void push(int data) {
        Node* newNode = new Node(data , top);
        top = newNode;
        cout << "Element Pushed : " << data << endl;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is Empty." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getNodeCount() {
        return Node::count;
    }

    bool isEmpty() {
        return (top == NULL);
    }
};

int main() {

    Stack st;

    st.display();

    return 0;
}