#include <iostream>
using namespace std;
void a(){
    int a;
    char b;
    int c;
    int i = 0;
    char op ;
    while (true){/*add a loop in calculater*/
    i++;
    cin>>a;
    cin >>b;
    cin >>c;
        switch (b){
            case  '+':
                cout<<a+c<<endl;
                break;
            case '-':
                cout<<a-c<<endl;
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
        if (i >= 3){
            cout <<"do you want to contiune"<<endl;
            cin>>op;
            if (op == 'n'){
                break;
            }

        }
    }
    
}
int main(){
    a(); 
    return 0;
}