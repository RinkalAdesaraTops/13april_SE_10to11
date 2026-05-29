#include<iostream>
using namespace std;
class user{
    public:
        int a,b;
        int id;
        char name[40];
    public:
    // special member function
    //it is automatically called when object is created
        user(){ //default constructor
            cout<<"Constructor called.."<<endl;
        }
        user(int p,int q){ //parameterized constructor
            a=p;
            b=q;
        }
        void add(){
            cout<<"Addition is "<<a+b<<endl;
        }
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
    user u2(20,10);
    u2.add();
}