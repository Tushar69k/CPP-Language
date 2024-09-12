#include<iostream >
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


    void display() {
        cout << "LinkedList ::\n";
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deleteAlternate(Node*& head) {

        Node* curr_node = head;
        while (curr_node != NULL && curr_node->next != NULL) {
            Node* temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
            curr_node = curr_node->next;
        }
    }

};


int main() {
    LinkedList l;
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

    l.display();
    cout << "\nafter alternate Deletion :\n";
    l.deleteAlternate(l.head);
    l.display();



}