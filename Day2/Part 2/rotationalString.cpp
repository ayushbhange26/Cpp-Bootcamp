#include <iostream>
#include <string>
using namespace std;
int main(){

    string str1, str2;
    cout << "Enter any two string";
    cin >> str1 >> str2;
    int str2Length = str2.length();
    // string 1 + string 2
    string result = str1+str1;
    if(str1.length()==str2.length()){
        for(int i=0;i<=str2Length;i++){
            if(result.substr(i,str2Length)==str2){
                cout << "yes";
                return 0;
            }
        }
        cout << "no";
    }
    else{
        cout << "Not a rotation";
    }
}