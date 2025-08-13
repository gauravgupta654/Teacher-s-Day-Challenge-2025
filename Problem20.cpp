#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
    
    int x = s.length();
    
    
    if (x != t.length()) {
        cout << "NO" << endl;
        return 0;
    }
    
    
    for (int i = 0; i < x; i++) {
        if (s[i] != t[x - 1 - i]) {  
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}
