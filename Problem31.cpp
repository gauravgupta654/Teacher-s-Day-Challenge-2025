#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int groups = 1;
    string prev, current;
    
    if (n > 0) {
        cin >> prev;
        for (int i = 1; i < n; i++) {
            cin >> current;
            if (current != prev) {
                groups++;
            }
            prev = current;
        }
    }
    
    cout << groups << endl;
    return 0;
}
