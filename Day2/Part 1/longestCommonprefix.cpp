#include <iostream>
#include <string>
using namespace std;
int main(){
    string strs[3] = {"amanAysuh","amansoni","amansinha"};
    int count = 0 ;
    int n = sizeof(strs) / sizeof(strs[0]); 
    
    for(int i=0;i<strs[0].length();i++){
        for(int j=1;j<n;j++){
            if(strs[0][i] != strs[j][i]){
                cout << count ;
                return 0;
            }
        }
        count ++;
    }
    return 0;
}