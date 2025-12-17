#include <iostream>
using namespace std;
void a(){
    int a;
    cout<<"enter your age"<<endl;
    cin>>a;
    if (a < 18){
        cout<<"you are a child"<<endl;
    }
    else if (a >= 18){
        cout<<"you are a adult"<<endl;
    }
}
int main(){
    a(); 
}