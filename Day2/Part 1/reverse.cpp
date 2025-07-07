#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string name ;
    cin >> name;
    // reverse(name.begin(),name.end()); // inbuilt methodology

    // Without using inbuilt
    for(int i=0;i<name.length()/2;i++){
        swap(name[i],name[name.length()-i-1]);
    }
     cout <<"Reverse String is : " <<  name << endl;

    // converting to lowercase
    for(int i=0;i<name.length()/2;i++){
        if(tolower(name[i])!=tolower(name[name.length()-i-1])){
            cout << "Given String is not a Pallindrome." << endl;
            return 0;
        }
    }
    cout << "Given String is a Pallindrome.";
}