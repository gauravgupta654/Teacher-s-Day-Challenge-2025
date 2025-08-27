#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int a[n];
    int result[n];  
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        result[a[i] - 1] = i + 1;
    }
    
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
