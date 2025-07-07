#include <iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter your string: " << endl;
    cin >> s;

    // lower to upper case
    // and upper to lower case

    for(int i = 0; i <s.length(); i++){
        if(s[i]<=90){
            s[i] = s[i]+32;
        }
        else{
            s[i] -= 32;
        }
    }
    cout << s;
}