#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            count = count + i;
        }
        else{
            count = count - i;
        }
    }
    cout << count << endl;
    
    return 0;
}
