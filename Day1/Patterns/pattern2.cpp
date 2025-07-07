#include <iostream> 
using namespace std;
int primeNum(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return i;
        }
    }
    return 0;
}
int main(){
    int n=5;
    int count =2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            while(primeNum(count)!=0){
                count++;
            }
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    // for prime number 
}