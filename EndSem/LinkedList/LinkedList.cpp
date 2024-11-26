#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        next = NULL;
    }

};

bool isEmpty() {
    return (head == NULL);
}

void insertAtHead(Node*& head , int data) {
    Node* new_node = new Node(data);
    if (!isEmpty()) {
        new_node->next = head;
    }
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


void insertAtPosition(Node*& head , int pos , int ele) {
    if (pos == 0) {
        insertAtHead(head , val);
        return;
    }

    Node* temp = head;
    Node* new_node = new Node(ele);

    int current = 0;

    while (current != pos - 1) {
        temp = temp->next;
        current++;
    }

    temp->next = new_node;
    new_node->next = temp->next;

}


void insertAttail(Node*& head , int ele) {
    Node* temp = head;
    Node* new_node = new Node(ele)
        while (temp->next != NULL) {
            temp = temp->next;
        }
    temp->next = new_node;
}

void deleteAtHead(Node*& head) {
    Node* temp = head;
    head = temp->next;
    free(temp);
}


void deleteatPosition(Node*& head , int pos) {
    if (pos == 0) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;

    int curr = 0;
    while (curr != pos - 1) {
        temp = temp->next;
        curr++;
    }

    Node* del = temp->next;

    temp->next = temp->next->next;
    free(del);
}

void deleteatTail(Node*& head) {
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    Node* del = temp->next;
    temp->next = NULL;
    free(del);

}




int main() {







    return 0;
}