#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void deleteByValue(int value) {
        if (head == NULL) return;

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == NULL) return;

        prev->next = curr->next;
        delete curr;
    }

    bool search(int value) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == value)
                return true;
            temp = temp->next;
        }
        return false;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.display();
    list.deleteByValue(10);
    list.display();
    cout << (list.search(20) ? "Found" : "Not Found") << endl;
    return 0;
}
