#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    int count=0;
    int c=0;
   for(int i=1;i<=n;i++){
        
      int a,b;
      cin>>a>>b;
      
      if(a>b){
          c=0;
      }else if(b-a>=2){
          c=1;
      }else{
          c=0;
      }
      
      count=count+c;
    }
    
    cout<<count;
    
    
    
    return 0;
}
