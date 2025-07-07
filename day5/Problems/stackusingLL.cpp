#include <iostream>
using namespace std;

class Node {
    int data;
    Node* next;
    
    public:
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* topNode;
    int count;

public:
    Stack() {
        topNode = nullptr;
        count = 0;
    }

    // Push operation
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
        count++;
    }

    // Pop operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }

    // Peek / Top operation
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return topNode->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // Return size of stack
    int size() {
        return count;
    }

    // Display the stack
    void display() {
        Node* temp = topNode;
        cout << "Stack (top to bottom): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();             
    cout << "Top: " << s.top() << "\n";  
    s.pop();
    s.display();             
    cout << "Size: " << s.size() << "\n";

    return 0;
}
