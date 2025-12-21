#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    int l = 1 ;
    int j = 1;
    
    cin >>n;
    l = n - 2;
    
    for (int i = 0;i<n;i++){
        if (j == 1 || j == n){
            cout<<string(n,'*')<<endl;
            j++;
        }
        else{
            cout<<'*'<<string(l,' ')<<'*'<<endl;
            j++;
        }
        
    }
    


}
int main(){
    ca(); 
    return 0;
}