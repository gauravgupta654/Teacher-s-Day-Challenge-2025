#include<iostream>
#include<string>
using namespace std;
 
int main(){
   
   int x=0;
   
   int n;
   cin>>n;
   
   string s;
   for(int i=0;i<n;i++){
       cin>>s;
   
   
   if((s=="X++")||(s=="++X")){
       x=x+1;
   }else if((s=="X--")||(s=="--X")){
       x=x-1;
   }
   
   
   }
   
   cout<<x<<endl;
    
    
    return 0;
}
