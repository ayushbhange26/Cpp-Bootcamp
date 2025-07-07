#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "ABCDEFGHIJKLMNOP";
    int shift = 26;
    string result = "";

    for(int i=0;i<s.length();i++){
        char ch = ((s[i]-'A')+ shift) % 26;
        result += ch + 'A';
    }
    cout << result;
}