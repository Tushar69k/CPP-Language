#include<iostream>
using namespace std;

class Node {

public:
    int val;
    Node* prev;
    Node* next;

    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
    }

};


int main() {
    Node* new_node = new Node(3);



    return 0;
}