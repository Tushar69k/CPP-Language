#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};


void insertAtHead(Node*& head , int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}


void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(Node*& head , int val) {
    Node* new_node = new Node(val);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node* head , int val , int pos) {
    Node* new_node = new Node(val);
    Node* temp = head;

    int current = 0;
    while (current != pos - 1) {
        temp = temp->next;
        current++;
    }
    new_node->next = temp->next;
    temp->next = new_node;

}

int main() {

    Node* head = NULL;
    insertAtHead(head , 2);
    display(head);
    insertAtHead(head , 1);
    display(head);
    insertAtTail(head , 3);
    display(head);
    insertAtPosition(head , 89 , 2);
    display(head);
    return 0;
}
