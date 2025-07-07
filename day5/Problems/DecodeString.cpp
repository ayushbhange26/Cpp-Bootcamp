#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){

    string s = "3[3[s]2[ab]]";
    int n= s.length();
    int temp = 0;
    string result = "";
    
    string tempstr = "";
    string laststr = "";

    stack <char> st;
    stack <int> number;

    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57){
            number.push(int(s[i]-48));
        }
        else if(s[i]=='['){c
            tempstr = "";
            st.push(s[i]);
        }
        else if(s[i]==']'){
            st.pop();
            
            for(int i=0;i<number.top();i++){
                result += tempstr;
            }
            number.pop();
            
        }
        else{
            tempstr += s[i];
        }
    }
    cout << result;

}