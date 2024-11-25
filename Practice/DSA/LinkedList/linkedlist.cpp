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
    if (pos == 0) {
        insertAtHead(head , val);
        return;
    }

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


void updateAtPosition(Node*& head , int val , int pos) {

    Node* temp = head;

    int currentpos = 0;
    while (currentpos != pos) {
        temp = temp->next;
        currentpos++;
    }

    temp->val = val;

}


void deleteAtHead(Node*& head) {
    Node* temp = head;

    head = head->next;
    free(temp);
}


void deleteAtTail(Node*& head) {
    Node* secondlast = head;

    while (secondlast->next->next != NULL) {
        secondlast = secondlast->next;
    }

    Node* temp = secondlast;

    temp = secondlast->next;
    secondlast->next = NULL;
    free(temp);

}


void deleteAtPosition(Node*& head , int pos) {

    if (pos == 0) {
        deleteAtHead(head);
        return;
    }

    int currentpos = 0;
    Node* prev = head;

    while (currentpos != pos - 1) {
        prev = prev->next;
        currentpos++;
    }

    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);

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
    updateAtPosition(head , 69 , 1);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head , 0);
    display(head);

    return 0;
}
