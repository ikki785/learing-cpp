#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    
    
    cout<<"enter"<<endl;
    cin>>n;
    char l = n ;
    for (int i = 0;i<n;i++){
        cout<<string(l,'*')<<endl;
        l--;
    }
}
int main(){
    ca(); 
    return 0;
}