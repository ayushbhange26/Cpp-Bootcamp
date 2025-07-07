//Process space-separated ustom formatted inputs

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);  
    vector <string> ID;
    vector <string> Name;

    int pivot=0;

    for(int i=0;i<name.length();i++){
        if(name[i]=='-'){
            ID.push_back(name.substr(pivot,i-pivot));
            pivot=i+1;
        }
        if(name[i]==' '){
            Name.push_back(name.substr(pivot,i-pivot));
            pivot=i+1;
        }
        if(i==name.length()-1){
            Name.push_back(name.substr(pivot,i-pivot+1));
        }
    }

    for(int i=0;i<ID.size();i++){
        cout << ID[i] << "  " << Name[i] << endl;
    }
}
