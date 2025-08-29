#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    
    int a[14]={4,7,44,47,74,77,477,744,744,444,474,747,777,774};
    
    for(int i=0;i<14;i++){
        if(n%a[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
        
    }
    
    cout<<"NO"<<endl;
    
    
    
    
    
    return 0;
}
