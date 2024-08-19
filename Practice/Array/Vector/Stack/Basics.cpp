#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<int> s;

/* push Operation : It stacks up a new item. A stack overflow circumstance is when the stack
is completely full.*/
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


/* pop Operation : It takes something out of the stack. In the opposite sequence from which
they were pushed,the things are popped.The condition is referred to as an underflow if the
stack is empty.*/
    s.pop();


/* top Operation : top() function is used to reference the top(or the newest) element of the
stack.*/
    s.top();
    cout << "Printing top element : " << s.top() << endl;


/* empty Operation : empty() function is used to check if the stack container is empty or
not.*/
    if (s.empty()) {
        cout << "Stack is Empty!" << endl;
    }
    else {
        cout << "Stack is not Empty!" << endl;
    }




    for (int i = 0; i < 5; i++) {
        cout << s.top() << " ";
        s.pop();
    }






    return 0;
}