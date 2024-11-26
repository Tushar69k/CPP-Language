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

class cll {
    Node* tail;

public:
    cll() {
        tail = NULL;
    }

    bool isempty() {
        return tail == NULL;
    }

    void insertatHead(int data) {
        Node* new_node = new Node(data);
        if (isempty()) {
            tail = new_node;
        }
        new_node->next = tail->next;
        tail->next = new_node;
    }

    void insertatTail(int data) {
        Node* new_node = new Node(data);
        if (isempty()) {
            tail = new_node;
        }
        new_node->next = tail->next;
        tail->next = new_node;
        tail = new_node;
    }

    void deleteatHead() {
        if (isempty()) {
            cout << "Cll is Empty.";
        }
        Node* temp = tail->next;
        tail->next = tail->next->next;
        tail->next = NULL;
        free(temp);
    }

    void deleteattail() {
        if (isempty()) {
            cout << "Cll is Empty.";
        }
        Node* temp = tail->next;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        tail = temp;

        Node* del = temp->next;
        del = NULL;
        free(del);
    }

    void display() {
        Node* temp = tail->next;
        do {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != tail->next);


    }
};


int main() {

    cll c;
    c.insertatHead(3);
    c.insertatTail(4);
    c.insertatTail(5);
    c.insertatTail(6);
    c.insertatHead(2);
    c.display();
    return 0;
}