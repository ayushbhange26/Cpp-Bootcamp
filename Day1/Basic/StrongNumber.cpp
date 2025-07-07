#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n ;
    cout << "Enter your Number :";
    cin >> n;
    int sum = 0;
    int temp = n;
    while(temp>0){
        int rem = temp%10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(n==sum){
        cout << "Strong Number";
    }
    else{
        cout << "Not a Strong Number";
    }
 }