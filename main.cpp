#include <iostream>
#include <string>
using namespace std;
void ca(){
    int n ;
    int l = 1 ;

    
    cin >>n;
    int mid = n/2; 
    
    for (int i = 0;i<n;i++){
        if (i!=mid){
            for(int j = 0;j<n;j++){
                if (j == mid){
                    cout<<"*";
                }
                else{
                    cout<<" ";    
                }
            }
            cout<<endl;
        }
        else{
            cout<<string(n,'*')<<endl;
        }
        
    }
    


}
int main(){
    ca(); 
    return 0;
}