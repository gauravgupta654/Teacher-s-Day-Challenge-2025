#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    int a[n];
    
    int max_index = 0, min_index = 0;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > a[max_index]){
            max_index = i;
        }
        if(a[i] <= a[min_index]){  
            min_index = i;
        }
    }
    
    int count = 0;
    
    if(max_index > min_index){
 
        count = max_index + (n - 1 - min_index) - 1;
    }
    else{
        count = max_index + (n - 1 - min_index);
    }
    
    cout << count << endl;
    
    return 0;
}
