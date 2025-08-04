#include <iostream>
#include <cctype> // For tolower()
using namespace std;
 
int main() {
    string s;
    cin >> s;
    char vowels[] = {'a', 'e', 'i', 'o', 'u','y'};
    
    for (int i = 0; i < s.size(); i++) {
        char lower_char = tolower(s[i]); // Convert to lowercase
        bool is_vowel = false;
        
        // Check if the lowercase character is a vowel
        for (int j = 0; j < 6; j++) {
            if (lower_char == vowels[j]) {
                is_vowel = true;
                break;
            }
        }
        
        // If it's not a vowel, print '.' followed by the lowercase character
        if (!is_vowel) {
            cout << "." << lower_char;
        }
    }
    
    return 0;
}
