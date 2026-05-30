#include <iostream>
using namespace std;
// method overiding - fun naME same argument same but in parent-child class
// method overloading - func name same but arguments are diff
class abc{
    public:
        abc(){
            cout<<"Abc constructor called.."<<endl;
        }
        void dispA(){
            cout<<"Abc display called.."<<endl;
        }
};
class xyz : public abc{
public:
        xyz(){
            cout<<"Xyz constructor called.."<<endl;
        }
        void disp(){
            cout<<"Xyz display called.."<<endl;
        }
};
class pqr : public xyz{
public:
        pqr(){
            cout<<"pqr constructor called.."<<endl;
        }
        void disp(){
            cout<<"pqr display called.."<<endl;
        }
};
int main(){
    pqr p1;
    p1.dispA();
    p1.disp();
    // :: scope resolution operator - class memeber access
    p1.xyz::disp();
    // p1.dispX();
}