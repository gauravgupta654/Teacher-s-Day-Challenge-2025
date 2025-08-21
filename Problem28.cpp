#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    
    vector<int> left(n, 0);
    for (int i = 1; i < n; i++) {
        if (h[i] >= h[i-1]) {
            left[i] = left[i-1] + 1;
        } else {
            left[i] = 0;
        }
    }
    
    vector<int> right(n, 0);
    for (int i = n-2; i >= 0; i--) {
        if (h[i] >= h[i+1]) {
            right[i] = right[i+1] + 1;
        } else {
            right[i] = 0;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, left[i] + right[i] + 1);
    }
    
    cout << ans << endl;
    return 0;
}
