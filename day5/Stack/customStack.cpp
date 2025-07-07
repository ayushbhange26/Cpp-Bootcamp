#include <iostream>
#include <vector>
using namespace std;
const int MAX_SIZE = 100;

class Stack {
    int top;
    int arr[MAX_SIZE];
    public :
    
    Stack(){
        top = -1;
    }
    void push(int value){
        if(top >= MAX_SIZE){
            cout << "Stack Overflow";
        }
        else{
            arr[++top] = value;
            cout << value << " is added successfully. " << endl;
        }
    }
    void push(vector <int> v){
        if(top >= MAX_SIZE){
            cout << "Stack Overflow";
        }
        else{
             for(int i=0;i<v.size();i++){
                push(v[i]);
            }
        }
       
    }
    void pop(){
        if(top < 0){
            cout << "Stack Underflow";
        }
        else{
            int pop_value = arr[top--];
            cout << pop_value << " is pop." << endl;
        }
    }
    int peek(){
        if(top > 0){
            return arr[top];
        }
    }
    bool empty(){
        if(top < 0){
            return true;
        }
        return false;
    }

    void display(){
         cout << "Elements in stack are : " ;
        for(int i=0;i<=top;i++){
           cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    vector <int> num = {1,2,3,4,5,6};
    Stack st;
    st.push(num);
    st.display();
    st.pop();
    st.display();
    if(st.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    if(st.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}