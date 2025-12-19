#include <iostream>
#include <string>
using namespace std;
void ca(){
    string n ;
    int l ;
    cout<<"enter"<<endl;
    cin>>n;
    l = n.length();
    
    for (int i = l-1;i >= 0;i--){
        cout<<n[i]<<endl;
    }
    
    
}
int main(){
    ca(); 
    return 0;
}