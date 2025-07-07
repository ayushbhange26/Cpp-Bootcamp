#include <iostream>
#include <string>
using namespace std;
bool isPallindrome(int start, int end, string name) {
    while (start < end) {
        if (name[start] != name[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main(){
    string name = "helloracecarji";
    // cout << "Enter your String : ";
    // cin >> name;
    int longest = 0;
    string pallindromeString = "" ;
    for(int i=0;i<name.length();i++){
        for(int j=i+1;j<name.length();j++){
            if(isPallindrome(i,j,name) && (j-i+1)>longest){
                longest = j-i+1;
                pallindromeString = name.substr(i,j-i+1);
            }
        }
    }
    cout << "The Length of Longest pallindrome is : " << longest << endl;
    cout << " The string is : "<< pallindromeString;
}