#include <iostream>
#include <unordered_set>

using namespace std;
int main(){
    int n;
    cout << "Enter any Number :";
    cin >> n;

    int temp = n;
    int sum = 0;
    unordered_set<int> seen;

    while(n!=1 && seen.find(n)==seen.end()){
        temp = n;
        while(temp>0){
        sum += ((temp%10) * (temp%10));
        temp /= 10;
    }
    n = sum;
    sum = 0;
    seen.insert(n);
     
    }
    if(n==1){
            cout << "Is a happy Number";
            return 0;
    }
    else{
        cout << "Not happy";
    }
}