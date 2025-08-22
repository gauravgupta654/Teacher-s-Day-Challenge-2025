#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    
    string a;
    cin>>a;
    
    int x=0,y=0;
    
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            x++;
        }
        else if(a[i]=='D'){
            y++;
        }
    }
    
    
    if(x>y){
        cout<<"Anton"<<endl;
    }
    else if(y>x){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    
    
    
    
    
    return 0;
}
