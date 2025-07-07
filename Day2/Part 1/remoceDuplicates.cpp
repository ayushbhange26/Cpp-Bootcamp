#include <iostream>
#include <string>
#include <vector>
using namespace std;
 int main(){
    string str = "hello hi";
    bool result[26] = {false};

    vector <char> nonduplicates;

    for(int i=0;i<str.length();i++){
        if(str[i]<=90 && result[str[i]-65]==false){
            nonduplicates.push_back(str[i]);
            result[str[i]-65]=true;
        }
        else if(str[i]>90 && result[str[i]-97]==false){
            nonduplicates.push_back(str[i]);
            result[str[i]-97]=true;
        }
    }
    for(int i=0;i<nonduplicates.size();i++){
        cout << nonduplicates[i] << " ";
    }
 }