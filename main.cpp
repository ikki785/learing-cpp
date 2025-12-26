#include <iostream>
#include <string>
using namespace std;
class human{
    
    public:
        string name;
        int age;
        void as(){
            char op;
            cout<<"do you like big ass"<<endl;
            cin>>op;
            if (op == 'y'||op == 'Y'){
                for (int i=0;i<101;i++){
                    cout<<"big ass"<<endl;
                }
            
            }
            else {
                cout<<"ok"<<endl;
            }
        }
};
int main(){
    human human1;
    human1.name = "suman";
    human1.age = 23;
    human1.as();

    return 0;
}