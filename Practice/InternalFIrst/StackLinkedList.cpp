#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
}

struct node* push(struct node* top , int x) {
    if (isFull(top)) {
        cout << "Stack is FUll ( OVERFLOW )" << endl;
    }
    else {
        struct node* p = (struct node*)malloc(sizeof(struct node));
        p->data = x;
        p->next = top;
        top = n;
        return top;
    }

}

struct node* isEmpty(struct node* top) {
    if (top == NULL) {
        return 1;
    }
    else return 0;
}

struct node* isFull(struct node* top) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL) {
        return 1;
    }
    else return 0;
}


int main() {

    Struct node* top = NUll;
    top = push(top , 69);
    top = push(top , 99);
    top = push(top , 89);
    isEmpty(top);



    return 0;
}