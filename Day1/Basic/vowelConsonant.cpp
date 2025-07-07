#include <iostream>
#include <cctype> 
using namespace std;

bool isSpecialChar(char ch) {
    return !isalnum(ch);  
}

bool isVowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char key;
    char choice;

    do {
        cout << "Enter any key: ";
        cin >> key;

        cout << "\nChoose operation:\n";
        cout << "1. isDigit\n";
        cout << "2. isAlpha\n";
        cout << "3. isSpecial\n";
        cout << "4. isVowel\n";
        cout << "5. isConsonant\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch(choice) {
            case '1':
                if (isdigit(key))
                    cout << key << " is a digit.\n";
                else
                    cout << key << " is NOT a digit.\n";
                break;

            case '2':
                if (isalpha(key))
                    cout << key << " is an alphabet letter.\n";
                else
                    cout << key << " is NOT an alphabet letter.\n";
                break;

            case '3':
                if (isSpecialChar(key))
                    cout << key << " is a special character.\n";
                else
                    cout << key << " is NOT a special character.\n";
                break;

            case '4':
                if (isVowel(key))
                    cout << key << " is a vowel.\n";
                else
                    cout << key << " is NOT a vowel.\n";
                break;

            case '5':
                if (isalpha(key) && !isVowel(key))
                    cout << key << " is a consonant.\n";
                else
                    cout << key << " is NOT a consonant.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to check another character? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');  
}
