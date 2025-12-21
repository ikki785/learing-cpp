#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    int l = 0 ;
    int j = 1;
    
    cin >>n;
    l = n;
    
    for(int i = 0;i<n;i++){
        cout<<string(l,' ')<<string(n,'*')<<endl;
        l--;
    }
    


}
int main(){
    ca(); 
    return 0;
}