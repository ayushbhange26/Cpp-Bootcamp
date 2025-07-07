#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr = {1,5,4,3};
    int n= arr.size();

    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int amount = min(arr[i],arr[j]) * (j-i);
            res = max(amount,res);
        }
    }
   cout << res;



}