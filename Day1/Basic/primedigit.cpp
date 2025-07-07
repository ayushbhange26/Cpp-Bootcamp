#include <iostream> 
using namespace std;
// no need to check for every integer
// bool prime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    int digit;
    cout << "Enter any number : ";
    cin >> digit;
    int temp = digit;
    int count = 0;
    while(temp>0){
        int rem = temp%10;
        if(rem==2 ||rem==3 ||rem==5 ||rem==7){
            count ++;
        }
        temp /= 10;
    }
    cout << count;
}