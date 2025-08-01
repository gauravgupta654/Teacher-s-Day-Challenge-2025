#include<iostream>
using namespace std;
 
int main(){
    int i;
    cin>>i;
    
    while(i--){
    string w;
    
    cin>>w;
    
    int x= w.size();
    
    if(x <=10){
        
        cout<<w<<endl;
    }
    
    
    else{
        cout<<w[0]<<x-2<<w[x-1]<<endl;
        
    }
    }
    return 0;
}
