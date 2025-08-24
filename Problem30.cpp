#include <iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int c=1;
    
    if(a==b){
        cout<<1;
    }
    
    else{
    for(int i=1;i<b;i++){
        
        a=a*3;
        b=b*2;
        if(a>b){
            cout<<c;
            break;
        }
        c++;
    }
    
}
    
    
    return 0;
}
