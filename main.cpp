#include <iostream>
using namespace std;
void a(){
    int a;
    char b;
    int c;
    ;
    cin>>a;
    cin >>b;
    cin >>c;
    switch (b){
        case  '+':
            cout<<a+c<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*c<<endl;
            break;
        case '/':
            cout<<a/c<<endl;
            break;
        default:
            cout<<"envialied option fool ";
            break;
    }
    
}
int main(){
    a(); 
}