#include<iostream>
#include<cctype> 

using namespace std;

int main() {
    string a, b;
    
    cin >> a;
    cin >> b;
    
    int x = a.size();
    int y = b.size();
    
    if (x != y) {
        if (x > y) {
            cout << "-1";
        } else {
            cout << "1";
        }
        return 0;
    }
    
    for (int i = 0; i < x; i++) {
        char k = tolower(a[i]);
        char g = tolower(b[i]);
        
        if (k < g) {
            cout << "-1";
            return 0;
        } else if (k > g) {
            cout << "1";
            return 0;
        }
    }
    
    cout << "0";
    return 0;
}
