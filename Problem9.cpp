#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    int c=0;
    
    int f=0;
    
    int a[n];
 
    
    for(int i=0;i<n;i++){
        int c=0;
        
        for(int j=0;j<3;j++){
            cin>>a[j];
            
            if(a[j]==1){
                
                c++;
            }
        }
        
        if(c >= 2){
            f++;
        }
    }
    
    cout<<f<<endl;
    
    
    return 0;
}
