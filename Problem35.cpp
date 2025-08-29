#include<iostream>
using namespace std;
 
int main(){
    
    int n,m;
    
    cin>>n>>m;
    
    if(n>m){
        cout<<"NO"<<endl;
        return 0;
    }
    else if(m==2*n){
        cout<<"NO"<<endl;
        return 0;
    }
    
    for(int i=2;i<=m/2;i++){
        if(n%i==0 || m%i==0){
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    if(m>20){
    if((m-n)<7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    }
    
    else{
         if((m-n)<5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
        
    }
    
    
    
    return 0;
}
