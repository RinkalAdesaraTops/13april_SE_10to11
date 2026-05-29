#include<iostream>
using namespace std;
class user{
    public:
        int id;
        char name[40];
    public:
        void getData(){
            cout<<"ENter id:";
            cin>>id;
            cout<<"ENter name:";
            cin>>name;
        }
        void putData(){
            cout<<"Your id is "<<id<<endl;
            cout<<"Your name is "<<name<<endl;
        }
};
int main(){
    user u1;
    u1.getData();
    u1.putData();
}