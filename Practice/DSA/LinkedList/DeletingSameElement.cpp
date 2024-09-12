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

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insert(int value) {

        Node* new_node = new Node(value);
        if (head == NULL) {
            head = new_node;
            return;
        }


        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
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

    void deleteSame(Node*& head) {

        Node* curr_node = head;

        while (curr_node != NULL) {
            while (curr_node->val != curr_node->next->val) {
                deleteAtTail(curr_node);
            }
        }

    }
};

int main() {

    LinkedList l;
    Node* head = NULL;
    cout << "Enter Size of your LinkedList : ";
    int size;
    cin >> size;

    int val;
    for (int i = 0; i < size; i++) {
        cout << "Enter data in (" << (i + 1) << ") Node : ";
        cin >> val;
        l.insert(val);
        val = 0;
    }
    cout << endl;

    l.display(head);
    // l.deleteSame(head);




    return 0;
}
