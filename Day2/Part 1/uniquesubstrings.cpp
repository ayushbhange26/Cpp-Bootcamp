#include <iostream>
#include <set>
using namespace std;
int main(){
    string str;
    cin >> str;
    
    set <string> s;
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
                (s.insert(str.substr(i,j-i+1)));
        }
    }
    for(string w: s){
        cout << w << " ";
    }
}