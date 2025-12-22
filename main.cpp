#include <iostream>
#include <string>
using namespace std;

void ca(int* a,int* b){
    int temp;
    temp = *b;
    *a = *b;
    *a = temp;
    

    
    
}
int main(){
    int x =3;
    int y = 4;
    cout<<x<<" "<<y<<endl;
    ca(&x,&y); 
    cout<<x<<" "<<y<<endl;
    return 0;
}