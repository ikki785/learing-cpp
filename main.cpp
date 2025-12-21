#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    int l = 1 ;
    char j = 'a';
    
    
    cout<<"enter"<<endl;
    cin>>n;
    
    for (int i = 0;i<n;i++){
        cout<<string(l,j)<<endl;
        l++;
        j++;
    
    }


}
int main(){
    ca(); 
    return 0;
}