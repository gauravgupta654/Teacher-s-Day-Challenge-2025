#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool dangerous = false;
    for (int i = 0; i <= n - 7; i++) {
        bool same = true;
        for (int j = i; j < i + 7; j++) {
            if (s[j] != s[i]) {
                same = false;
                break;
            }
        }
        if (same) {
            dangerous = true;
            break;
        }
    }
    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
