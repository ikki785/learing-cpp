#include <iostream>
#include <string>
using namespace std;
int i = 1;
void fa(){
    
    if (i <= 100){
        cout<<i<<"big ass"<<endl;
        i++;
        fa();
    }
}
int main(){
    string pass ;
    cout<<"enter password"<<endl;
    cin >>pass;
    if (pass != "0"){
        fa();
    }
    
    return 0;
}