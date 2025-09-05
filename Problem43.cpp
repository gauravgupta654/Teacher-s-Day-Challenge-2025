#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    bool allUpper = true;
    for (char c : word) {
        if (islower(c)) {
            allUpper = false;
            break;
        }
    }
    
    bool exceptFirst = true;
    if (word.length() >= 1) {
        if (isupper(word[0])) {
            exceptFirst = false;
        } else {
            for (int i = 1; i < word.length(); i++) {
                if (islower(word[i])) {
                    exceptFirst = false;
                    break;
                }
            }
        }
    }
    
    if (allUpper) {
        for (char &c : word) {
            c = tolower(c);
        }
        cout << word << endl;
    } else if (exceptFirst) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
        cout << word << endl;
    } else {
        cout << word << endl;
    }
    
    return 0;
}
