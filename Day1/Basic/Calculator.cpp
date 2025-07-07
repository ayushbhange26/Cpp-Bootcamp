#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    char ch ;
    char choice;
    do{
        cout << "Enter any two Numbers : ";
        cin >> num1 >> num2;
        cout << "Enter the operation : \n1. Addition (+)\n2. Substraction(-) \n3.Multiplication(*) \n4.Division(/) \n";
        cin >> ch;
        switch(ch){
            case '+':
            cout << "Result is : " << num1+num2;
            break;

            case '-':
            cout << "Result is : " << num1-num2;
            break; 

            case '*':
            cout << "Result is : " << num1*num2;
            break; 

            case '/':
            if(num2==0){
                cout << "Cannot divide By Zero.";
            }
            else{
                cout << "Result is : " << num1/num2;
            }
            break;

            default : 
            cout << "Invalid operator!" << endl;
        }
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> ch;
    }while(ch=='y' || ch=='Y');
}