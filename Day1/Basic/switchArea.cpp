#include <iostream>
using namespace std;
int main(){
    int length , breadth;
    char choice;
    do{
        cout << "Enter the length and breadth :";
        cin >> length >> breadth;
        char ch;
        cout << "Select you operation \n1. Calculate Area \n2. Find Perimeter \n3. Exit \n";
        cin >> ch;
        switch(ch){
            case '1':
            cout << "Area of shape is :" << length*breadth;
            break;

            case '2':
            cout << "Perimeter of shape is :" << 2*(length+breadth);
            break;
            
            default:
            cout << "Invalid operation.";
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
    }while(choice=='y' || choice=='Y');
    
}