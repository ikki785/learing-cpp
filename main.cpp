#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
void game(){
    int cp;
    string com;
    string person;
    srand(time(0));
    cp = rand() % 3 + 1;
    if (cp == 1){
        com = "rock";
    }
    else if (cp == 2){
        com = "paper";
    }
    else if (cp == 3){
        com = "sezer";
    }
    cout<<"enter rock , paper ,sezer"<<endl;
    cin>>person;
    if (person == "rock" && com == "paper"){
        cout<<"i choes "<<com<<endl;
        cout<<"you lose"<<endl;

    }
    else if(person =="paper" && com == "sezer"){
        cout<<"i choes "<<com<<endl;
        cout<<"you lose"<<endl;
    }
    else if(person == "rock" && com == "sezer"){
        cout<<"i choes "<<com<<endl;
        cout<<"you win"<<endl;
    }
    else if(person == "rock" && com == "rock"){
        cout<<"i choes "<<com<<endl;
        cout<<"draw"<<endl;
    }
    else {
        cout<<com;
    }
}
int main(){
    game();
}