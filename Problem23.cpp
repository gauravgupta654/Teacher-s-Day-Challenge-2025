#include<iostream>
using namespace std;
 
int main(){
int x;
cin>>x;
 
if(x==0){
    cout<<0<<endl;
}
int k=0;
 
 
    k=x%5;
    x=x/5;
    if(k>0){
        x++;
    }
 cout<<x<<endl;
   
    
    return 0;
}
