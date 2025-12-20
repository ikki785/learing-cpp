#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    int l ;
    cout<<"enter"<<endl;
    cin>>n;
    
    for (int i = 0;i<n;i++){
        for (int j = 1;j<n+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    ca(); 
    return 0;
}