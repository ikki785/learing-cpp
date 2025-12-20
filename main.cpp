#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    int l ;
    cout<<"enter"<<endl;
    cin>>n;
    cin>>l;
    for (int i = 0;i<n;i++){
        cout << string(l, '*')<<endl;
    }
    
    
  
}
int main(){
    ca(); 
    return 0;
}