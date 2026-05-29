#include<iostream>
using namespace std;
class user{
    public:
        int a,b;
    public:
        user(){
            cout<<"Default constructor called..."<<endl;
        }
        user(user &p){//reference object
            a = p.a;
            b = p.b;
        }
        void getData(){
            cout<<"ENter a & b:";
            cin>>a>>b;
        }
        void disp(){
            cout<<"A is "<<a<<endl;
            cout<<"B is "<<b<<endl;
        }
        // DESTRUCTOR - destroy/delete object which is created by constructor
        ~user(){
            cout<<"Destructor called..."<<endl;
        }
};
int main(){
    user u1,u3,u4;
    u1.getData();
    u1.disp();
    user u2(u1);
    u2.disp();
}