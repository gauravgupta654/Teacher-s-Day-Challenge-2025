#include<iostream>
using namespace std;
 
int main(){
    int n,k;
    
    cin>>n>>k;
    
    int d=0;
    int f=0;
    int a[n];
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    
    if(a[k-1]>=0){
        
        d=a[k-1];
    }
    
       for(int i=0;i<n;i++){
        
        if((a[i] >= d) && (a[i] != 0)){
            f++;
        }
        
          
    }
    
    cout<<f;
    
    return 0;
}
