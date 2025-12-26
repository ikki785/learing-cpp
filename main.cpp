#include <iostream>
#include <string>
using namespace std;
class human{
    private :
        void ae(char es){
            string na ;
            na = es;
            cout<<na<<endl;
        }
    public:
        string name;
        int age;
        void as(){
            char op;
            cout<<"do you like big ass"<<endl;
            cin>>op;
            if (op == 'y'||op == 'Y'){
                for (int i=0;i<2;i++){
                    cout<<"big ass"<<endl;
                }
                ae('y');
            
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