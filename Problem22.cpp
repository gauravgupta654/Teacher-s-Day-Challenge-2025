#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main(){
    
    int n,t;
    cin>>n>>t;
    
    string a;
    cin>>a;
    
    if(a[0]=='G' && n==1){
        cout<<a<<endl;
        return 0;
    }
    
    while(t--){
        for(int j=0;j<n-1;){
            
            if(a[j]=='B' && a[j+1]=='G'){
                swap(a[j],a[j+1]);
                j=j+2;
            }
            else{
                j++;
            }
            
        }
        
    }
    
    
    
    cout<<a<<endl;
    
    
    return 0;
}
