#include <iostream>
using namespace std;
// inheritance - reusuability
class Abc
{ // parent/super/base class
public:
    Abc()
    {
        cout << "Abc constructor called.." << endl;
    }
    void disp(){
        cout<<"Display ABc called.."<<endl;
    }
};
class Xyz : public Abc
{ // child/sub/derived class
public:
    Xyz()
    {
        cout << "Xyz constructor called.." << endl;
    }
    void dispX(){
        cout<<"Display Xyz called.."<<endl;
    }
};
int main()
{
    Xyz x1;
    x1.disp();
    x1.dispX();
}