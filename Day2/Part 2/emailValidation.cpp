#include <iostream>
#include <regex>
using namespace std;
int main(){
    string email;
    cout << "Enter the E-mail : ";
    cin >> email;
    regex email_pattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");

    if(regex_match(email,email_pattern)){
        cout << "Match the pattern";
    }
    else{
        cout << "Not matched";
    }
}