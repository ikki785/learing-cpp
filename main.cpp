#include <iostream>
#include <string>
using namespace std;

void ca(){
    int x = 3;
    int* p = &x;
    cout<<*p<<endl;
}
int main(){
    ca(); 
    return 0;
}