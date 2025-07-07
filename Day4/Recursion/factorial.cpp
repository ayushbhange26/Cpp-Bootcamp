#include <iostream>
using namespace std; 
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int num ;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Factorial of given number is : " <<  factorial(num);
}