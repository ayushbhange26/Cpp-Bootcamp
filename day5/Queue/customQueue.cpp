#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Queue{
    int front = -1 , rear = -1;
    int arr[MAX_SIZE];

    public:
    bool isempty(){
        if(front == rear){
            return true;
        }
        return false;
    }

    void push(int value){
        if(rear >= MAX_SIZE){
            cout << "Overflow" << endl;
        }
        else if(front == rear) {
            front = rear = -1;
            arr[rear++] = value;
            cout << "yes" << endl;
        }
        else{
            arr[rear++] = value;
            cout << "yes" << endl;
        }
    }

    void pop(){
        if(isempty()){
            cout << "Underflow" << endl;
        }
        else{
            front++ ;
        }
    }
    void display(){
        if(isempty()){
            cout << rear << " " << front;
            cout << "No elements"<< endl;
        }
        else{
            for(int i=front+1;i<=rear;i++){
            cout << arr[i] << " ";
            }
        cout << endl;
        
    }}
};
int main(){
    Queue q;
    q.push(1);
    q.push(1);
    q.push(1);
    q.display();
}