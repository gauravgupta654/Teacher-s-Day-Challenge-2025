#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    if(n<2){
        cout<<0<<endl;
        return 0;
    }
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0,y=0;
    
    int count=1;
    
    if(a[1]>a[0]){
        y=a[1];
        x=a[0];
          for(int i=2;i<n;i++){
        
        if(a[i]>y){
            count++;
            y=a[i];
        }else if(a[i]<x){
            count++;
            x=a[i];
        }
     }
    
    }else{
        if(a[0]==a[1]){
            count=0;
        }
        y=a[0];
        x=a[1];
        for(int i=2;i<n;i++){
        
        if(a[i]>y){
            count++;
            y=a[i];
        }else if(a[i]<x){
            count++;
            x=a[i];
        }
     }
    
    }
    cout<<count<<endl;
    return 0;
}
