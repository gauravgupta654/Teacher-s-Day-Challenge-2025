#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    string s;
    cin>>s;
    
    string a={'H','Q','9'};
    
    for(int i=0;i<s.length();i++){
        for(int j=0;j<4;j++){
        if(s[i]==a[j]){
            cout<<"YES"<<endl;
            return 0;
        }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
