#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n= 4213;
    vector <int> v;
    while(n>0){
        int rem = n%10;
        v.push_back(rem);
        n = n/10;
    }
    sort(v.begin(),v.end());
    
    n = 0;
    for(int i=v.size()-1;i>=0;i--){
        n = n*10+v[i];
    }
    cout << "value of n after operation is : " <<  n;
}