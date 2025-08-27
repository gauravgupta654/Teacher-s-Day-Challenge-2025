#include<iostream>
#include<string>
using namespace std;
 
int main(){
    
    string s;
    cin>>s;
    
    int x=s.length();
    int k=0;
    
    if(x<2){
        cout<<"NO"<<endl;
        return 0;
    }
 for(int i=0;i<x;i++){
     if(s[i]!='4' && s[i]!='7'){
          k++;
          
     }
    
 }
    int j=x-k;
    if(j==4 || j==7){
        cout<<"YES"<<endl;
    }
    
    else{
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}
