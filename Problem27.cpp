#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    
    int a[n];
    double t=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        t=t+a[i];
    }
    
    double k= t/n;
    cout<<k<<endl;
    
    
    return 0;
}
