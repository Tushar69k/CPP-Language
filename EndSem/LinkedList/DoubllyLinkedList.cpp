#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }

};

class dll {
    Node* head;

public:

    bool isempty() {
        return (head == NULL);
    }

    void insertathead(int data) {
        Node* new_node = new Node(data);
        if (isempty()) {
            head = new_node;
            return;
        }

        head->prev = new_node;
        new_node->next = head;
        head = new_node;

    }

    void insertattail(int data) {
        Node* new_node = new Node(data);
        if (isempty()) {
            insertathead(data);
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->prev = temp;
    }

    void deleteathead() {
        if (isempty()) {
            cout << "No Elmenets!";
        }
        Node* temp = head;
        head->next->prev = NULL;
        head = temp->next;
        free(temp);
    }

    void deleteattail() {
        if (isempty()) {
            cout << "No Elmenets!";
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        temp->prev = NULL;
        temp = NULL;
        free(temp);

    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};


int main() {

    dll d;
    d.insertathead(8);
    d.insertathead(9);
    d.insertathead(10);
    d.insertathead(11);
    d.insertathead(12);
    d.display();


    return 0;
}