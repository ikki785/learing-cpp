#include <iostream>
#include <string>
using namespace std;

void ca(){
    int x = 3;
    cout<<&x<<endl;
}
int main(){

    ca(); 
    return 100;
}